/*//! add_client.cpp

#include "add_client.hpp"
#include "../../ui/ui.hpp"
#include "../../../backend/domains/clients/types/types.hpp"
#include "../../../backend/libcore/validation/validation.hpp"
#include <iostream>
#include "../../../backend/database/repositories/clients/clients_repository.hpp"

namespace screens::add_client {

    void show() {
        char addMore = 'y';
        do {

            clients::types::Client client;
            ui::readNewClient(client);
            ui::printClientRecord(client);

            if (validation::AskYesNo("\nSave this client to file?")) {
                // if (database::clients_repository::add(client))
                if (2>1)
                    std::cout << "\nRecord saved!\n";
                else 
                    std::cout << "\nFile saved!\n";

            } else {
                std::cout << "\nRecord discarded.\n";
            }

            std::cout << "\nAdd another client? (y/n): ";
            std::cin >> addMore;

        } while (toupper(addMore) == 'Y');

    }
} 
*/