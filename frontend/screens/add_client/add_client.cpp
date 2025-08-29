//! add_client.cpp

#include "add_client.hpp"
#include "../../ui/ui.hpp"
#include "../../../backend/domains/clients/types/types.hpp"
#include "../../../backend/domains/clients/services/clients_services.hpp"
#include "../../../backend/libcore/validation/validation.hpp"
#include "../../ui/ui.hpp"

#include <iostream>

namespace screens::add_client {

    void show() {   

        ui::showHeader("Add Client Screen\n");

        char addMore = 'y';
        do {

            clients::types::Client client;
            ui::readNewClient(client);
            ui::printClientRecord(client);


            if (validation::AskYesNo("\nSave this client to file?")) {
                if (clients_service::save_client(client))
                    std::cout << "\nRecord saved!\n";
                else 
                    std::cout << "\nSave failed!\n";
            } else {
                std::cout << "\nRecord discarded.\n";
            }

            std::cout << "\nAdd another client? (y/n): ";
            std::cin >> addMore;

        } while (toupper(addMore) == 'Y');
    }
} 
