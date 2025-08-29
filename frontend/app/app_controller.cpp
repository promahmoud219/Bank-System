//! app_controller.cpp

#include <cstdlib>   // for system()
#include <iostream>
#include "app_controller.hpp"
#include "../screens/main_menue/main_menue.hpp"
#include "../../backend/domains/clients/types/types.hpp"
#include "../../backend/domains/clients/types/types.hpp"
#include "../../backend/libcore/validation/validation.hpp"
#include "../screens/show_clients/show_clients.hpp"
#include "../screens/add_client/add_client.hpp"
#include "../ui/ui.hpp"

namespace app_controller {

    void run() {
        
        
        clients::types::MainMenueChoice choice;
        
        do {
            std::cout << "\033[2J\033[H" << std::flush;
            screens::MainMenue::showMainMenue();
            choice = static_cast<clients::types::MainMenueChoice>(validation::ReadNumberInRange("Choose what do you want to do? [1 - 6]: ", 1, 6));
                
            switch (choice)
            {   
                case clients::types::MainMenueChoice::ShowClientsList:
                std::cout << "\033[2J\033[H" << std::flush;
                screens::show_clients::show();
                ui::wait_for_enter();
                break;
                
                case clients::types::MainMenueChoice::AddClient:
                std::cout << "\033[2J\033[H" << std::flush;
                screens::add_client::show();
                ui::wait_for_enter();
                break;
                
                case clients::types::MainMenueChoice::UpdateClient:
                /* code */
                break;
                case clients::types::MainMenueChoice::DeleteClient:
                /* code */
                break;
                case clients::types::MainMenueChoice::SearchClient:
                /* code */
                break;
                case clients::types::MainMenueChoice::Exit:
                /* code */
                break;
                default:
                break;
            }
        } while(choice != clients::types::MainMenueChoice::Exit);
    }
}