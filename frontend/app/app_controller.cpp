//! app_controller.cpp

#include "app_controller.hpp"
#include "../screens/main_menue/main_menue.hpp"
#include "../../backend/domains/clients/types/types.hpp"
#include "../../backend/domains/clients/types/types.hpp"
#include "../../backend/libcore/validation/validation.hpp"
#include "../screens/show_clients/show_clients.hpp"
#include "../screens/add_client/add_client.hpp"

namespace app_controller {

    void run() {
        screens::MainMenue::showMainMenue();
        clients::types::MainMenueChoice choice = static_cast<clients::types::MainMenueChoice>(validation::ReadNumberInRange("Choose what do you want to do? [1 - 6]", 1, 6));

        switch (choice)
        {
        case clients::types::MainMenueChoice::ShowClientsList:
            screens::show_clients::show();
            break;
        case clients::types::MainMenueChoice::AddClient:
            // screens::add_client::show();
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
    }
}