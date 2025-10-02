// deposit.cpp

#include "deposit.hpp"
#include "../../ui_utils/ui_utils.hpp"

void Deposit::printMenuItems() {
	std::cout << "\n\t[1] Deposit Cash.";
	std::cout << "\n\t[2] Deposit Check.";
	std::cout << "\n\t[3] Back to Main Menu.\n";
}

void Deposit::show() {
	clear();
	printHeader();
	printMenuItems();
	UiUtils::printLine();
}