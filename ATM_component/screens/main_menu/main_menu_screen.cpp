// main_menu.cpp screen
#include <iostream>

#include "main_menu_screen.hpp"
#include "../../ui_utils/ui_utils.hpp"
#include "../../controllers/main_menu/main_menu_controller.hpp"
#include "../../../core_library/input_validation/input_validation.hpp"

void MainMenuScreen::printMenuItems() {
    std::cout << "\n\t[1] Quick Withdraw.";
    std::cout << "\n\t[2] Normal Withdraw.";
    std::cout << "\n\t[3] Deposit.";
    std::cout << "\n\t[4] Check Balance.";
    std::cout << "\n\t[5] Transfer.";
    std::cout << "\n\t[6] Logout.\n";
}

void MainMenuScreen::show() {
	MainMenuController controller;
    int choice = 0;

    do
    {
        showMenu();
	    choice = InputValidation::readIntegerInRange("\n\tSelect an option : ", 1, 6);
        controller.handleChoice(choice);
        if (choice != 6) 
            pressEnterToContinue();
        
    } while (choice != 6);
     
}

void MainMenuScreen::showMenu() {
    clear();
    printHeader();
    printMenuItems();
    UiUtils::printLine();
}

void MainMenuScreen::pressEnterToContinue() {
    std::cout << "\nPress Enter to continue...";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}

