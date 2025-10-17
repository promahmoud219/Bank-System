#include <iostream>
#include "main_menu_view.hpp"
#include "ATM_component/features/main_menu/controller/main_menu_controller.hpp"
#include "ATM_component/ui_utils/ui_utils.hpp"
#include "core_library/input_validation/input_validation.hpp"

void MainMenuView::printMenuItems() const {
    std::cout << "\n\t[1] Quick Withdraw.";
    std::cout << "\n\t[2] Normal Withdraw.";
    std::cout << "\n\t[3] Deposit.";
    std::cout << "\n\t[4] Check Balance.";
    std::cout << "\n\t[5] Transfer.";
    std::cout << "\n\t[6] Logout.\n";
}



