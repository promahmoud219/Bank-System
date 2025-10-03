// deposit.cpp

#include "deposit_screen.hpp"
#include "../../ui_utils/ui_utils.hpp"

void DepositScreen::printMenuItems() {
	std::cout << "\t[1] Deposit Cash.\n";
	std::cout << "\t[2] Deposit Check.\n";
	std::cout << "\t[3] Back to Main Menu.\n";
}

void DepositScreen::show() {
	showMenu();
}

void DepositScreen::showMenu() {
	clear();
	printHeader();
	printMenuItems();
	UiUtils::printLine();
}