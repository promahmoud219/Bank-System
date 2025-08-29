//! show_clients.cpp

#include "show_clients.hpp"


#include <vector>
#include <iomanip>
#include <iostream>

#include "../../../backend/domains/clients/types/types.hpp"
#include "../../ui/ui.hpp"
#include "../../../backend/database/repositories/clients/clients_repository.hpp"


namespace screens::show_clients {

    void show() {
        
        std::vector<clients::types::Client> Clients = database::clients_repository::load_all(); 
        std::string title = "Client List " + std::to_string(Clients.size()) + " Client(s)";  //! front-end -> UI
        ui::showHeader(title); //! UI in front-end
        ui::showTable(); 
        printRecords(Clients);          
    }

    void printLineRecord (const clients::types::Client& client)
    {
        std::cout << "| " << std::left << std::setw(15) << client.account_number;
        std::cout << "| " << std::left << std::setw(10) << client.pinCode;
        std::cout << "| " << std::left << std::setw(40) << client.name;
        std::cout << "| " << std::left << std::setw(16) << client.phone;
        std::cout << "| " << std::left << std::setw(12) << client.account_balance << "\n";
    }

    void printRecords (const std::vector<clients::types::Client>& clients)
    {
        for (const clients::types::Client& client : clients)    
        {
            printLineRecord(client);    
        }
        
    }

}