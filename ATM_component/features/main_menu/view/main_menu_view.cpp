#include <iostream>
#include "main_menu_view.hpp"
#include "ATM_component/ui_utils/input_utils/input_utils.hpp"
#include "ATM_component/ui_utils/output_utils/output_utils.hpp"
#include "ATM_component/features/main_menu/types/main_menu_options.hpp"

void MainMenuView::printMenuItems() const {
    std::cout << "\n\t[1] Quick Withdraw.";
    std::cout << "\n\t[2] Normal Withdraw.";
    std::cout << "\n\t[3] Deposit.";
    std::cout << "\n\t[4] Check Balance.";
    std::cout << "\n\t[5] Transfer.";
    std::cout << "\n\t[6] Logout.\n";
    OutputUtils::printLine();
}

int MainMenuView::getChoice() const {
    return InputUtils::readIntegerInRange(
        "\nSelect an option: ",
        static_cast<int>(MainMenuOptions::QUICK_WITHDRAW),
        static_cast<int>(MainMenuOptions::LOGOUT)
    );
}