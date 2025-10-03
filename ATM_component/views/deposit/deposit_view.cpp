#include "deposit_view.hpp"
#include "../../ui_utils/ui_utils.hpp"

void DepositView::printMenuItems() {
	std::cout << "\t[1] Deposit Cash.\n";
	std::cout << "\t[2] Deposit Check.\n";
	std::cout << "\t[3] Back to Main Menu.\n";
}

void DepositView::render() {
	showMenu();
}

void DepositView::showMenu() {
	clear();
	printHeader();
	printMenuItems();
	UiUtils::printLine();
}