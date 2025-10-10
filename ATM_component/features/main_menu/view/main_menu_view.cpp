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

void MainMenuView::render() {
    MainMenuController controller;
    int choice = 0, logout = 6;

    do {
        displayOptions();
	    choice = InputValidation::readIntegerInRange("\nSelect an option : ", 1, logout);
        controller.handleUserSelection(choice);
        if (choice != logout)
            return;
    } while (choice != logout);
}

void MainMenuView::displayOptions() const {
    clear(); 
    printHeader();
    printMenuItems();
    UiUtils::printLine();
}