// clients_repository.cpp

#include <vector>
#include <string_view>
#include <fstream>
#include <iostream>

// #include "encoding/encoding.hpp"
#include "serialization/clients.hpp"
#include "clients_repository.hpp"
// #include "context/repo_context.hpp"
// #include "../../../libcore/crypto/crypto.hpp"
#include "../../../domains/clients/types/types.hpp"
// #include "../../../domains/clients/config/config.hpp"
#include "../../../config/clients/clients_config.hpp"

#include "../../../../frontend/ui/ui.hpp"

//! this file deals with CRUDS {create, read, update, delete, save};

namespace database::clients_repository {

    //! this function is for reading 
    //! this is the function that i made , commented it to paste chat's 
    //^ and i reused it when i decided to make versions = simple first, scalability second.

    std::vector<clients::types::Client> load_all ()
    {
        std::vector<clients::types::Client> clients;
        std::fstream file;
        file.open(clients_config::file_path.data(), std::ios::in);
        if (file.is_open())
        {
            if (!file.is_open()) 
                std::cerr << "Error: could not open file " << clients_config::file_path.data() << std::endl;

            std::string line = "";
            clients::types::Client client;

            while(getline(file, line))
            {
                client = clients::serialization::deserialize(line);
                
                // std::string decrypted = libcore::encryption::decrypt(line);
                // clients::types::Client client = clients::serialization::deserialize(decrypted, separator);
                
                clients.push_back(client);
            }
            file.close();
        }
        return clients;
    }
    
    bool add(const clients::types::Client& client)
    {

        std::ofstream file(clients_config::file_path.data(), std::ios::app);
        if (!file.is_open()) return false;

        std::string serialized = clients::serialization::serialize(client, "#//#");
        
        file << serialized << "\n";
        // file << encrypt(serialized) << "\n";
        //^ Write: Serialize → Encrypt → Save to file
        //^ Read: Load line from file → Decrypt → Deserialize
        return true;
    }

    // bool save_all(const std::string& file_path, const std::vector<clients::types::Client>& clients)
    // {

    // }



    // Read whole file bytes
    // static std::vector<unsigned char> read_file_bytes(const std::string& path) {
    //     std::ifstream f(path, std::ios::binary);
    //     if (!f) return {};
    //     return std::vector<unsigned char>((std::istreambuf_iterator<char>(f)),
    //                                     std::istreambuf_iterator<char>());
    // }

    // ---- load_all ----
    // std::vector<clients::types::Client> load_all(const ClientsRepoCtx& ctx) {
    //     auto bytes = read_file_bytes(ctx.file_path);
    //     if (bytes.empty()) return {}; // treat missing/empty file as no clients

    //     // parse envelope -> nonce + ciphertext
    //     auto blob = decode_ciphertext(bytes);

    //     // call Bob -> decrypt
    //     auto plain_bytes = libcore::crypto::aead_decrypt(ctx.key, blob);

    //     // plaintext is CSV: convert and parse
    //     std::string csv(plain_bytes.begin(), plain_bytes.end());
    //     return clients::serialization::parse_csv(csv, ctx.csv_sep); // implement your parse
    // }

    // ---- save_all ----
    // bool save_all(const ClientsRepoCtx& ctx, const std::vector<clients::types::Client>& clients) {
    //     // 1) serialize all clients into CSV plaintext
    //     std::string csv = clients::serialization::serialize_all(clients, ctx.csv_sep);

    //     // 2) encrypt
    //     std::vector<unsigned char> plain(csv.begin(), csv.end());
    //     auto blob = libcore::crypto::aead_encrypt(ctx.key, {plain.data(), plain.size()});

    //     // 3) encode envelope
    //     auto encoded = encode_ciphertext(blob);

    //     // 4) atomic replace
    //     atomic_replace(ctx.file_path, encoded.bytes);
    //     return true;
    // }




    // bool remove(const std::string& file_path, const std::string& account_number)
    // {

    // }

    // bool update(const std::string& file_path, const clients::types::Client& updated_client)
    // {

    // }
    
}


/*
    void addNewClient ()  //! this function should be here in clients_repository.cpp 
    {
        Client client;
        readNewClient(client);
        printClientRecord(client);
    
        if (inputvalidation::AskYesNo("\nSave this client to file?")) {
            addLineToFile(toLine(client), config::DEFAULT_CLIENTS_FILE);
            std::cout << "\nRecord saved!\n";
        } 
        else
        std::cout << "\nRecord discarded.\n";
    }
    
    void addLineToFile (const std::string& data_line, const std::string_view& file_path)    
    {
        std::fstream file;
        file.open(file_path.data(), std::ios::out | std::ios::app);
        if (file.is_open()) {
            file << data_line << std::endl;
            file.close();
        }
    }
    
    void addClients()          //! i think this is in frontend because it has little algorithms and headers 
    {
        char addMore = 'y';
    
        do
        {
            std::cout << "\n\n\nAdding New Client:\n\n";
            addNewClient();     
            std::cout << "\nAdd another client? (y/n): ";
            std::cin >> addMore;
    
        } while (toupper(addMore) == 'Y');
    }


    



*/
