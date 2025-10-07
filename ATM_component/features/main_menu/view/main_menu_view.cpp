#include <iostream>
#include "main_menu_view.hpp"
#include "ATM_component/features/main_menu/controller/main_menu_controller.hpp"
#include "ATM_component/Ui_Utils/ui_utils.hpp"
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
    int choice = 0;
	int last_item = 6;
    do
    {
        displayOptions();
	    choice = InputValidation::readIntegerInRange("\nSelect an option : ", 1, last_item);
        controller.handleUserSelection(choice);
        if (choice != last_item) 
            UiUtils::pressEnterToContinue();
        
    } while (choice != last_item);
}

void MainMenuView::displayOptions() const {
    clear(); 
    printHeader();
    printMenuItems();
    UiUtils::printLine();
}