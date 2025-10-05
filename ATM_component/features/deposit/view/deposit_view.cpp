#include "deposit_view.hpp"
#include "../../../Ui_Utils/ui_utils.hpp"


void DepositView::printMenuItems() const {
	std::cout << "\t[1] Deposit Cash.\n";
	std::cout << "\t[2] Deposit Check.\n";
	std::cout << "\t[3] Back to Main Menu.\n";
}

void DepositView::render() {
	showMenu();
}

void DepositView::showMenu() const {
	clear();
	printHeader();
	printMenuItems();
	UiUtils::printLine();
}