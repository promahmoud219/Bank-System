#include <iostream>
#include "quick_withdraw_view.hpp"
#include "ATM_component/ui_utils/ui_utils.hpp"
#include "core_library/input_validation/input_validation.hpp"
#include "ATM_component/features/transactions/quick_withdraw/controller/quick_withdraw_controller.hpp"
#include "ATM_component/features/transactions/quick_withdraw/types/quick_withdraw_options.hpp"

void QuickWithdrawView::displayOptions() const {
	std::cout << "[1] 100\t\t[2] 200\n";
	std::cout << "[3] 400\t\t[4] 800\n";
	std::cout << "[5] 1000\t[6] 1200\n";
	std::cout << "[7] Back to main menu\n";
};

void QuickWithdrawView::render() {
	clear();
	printHeader();
	displayOptions();
	UiUtils::printLine();
	readUserChoice();
}

void QuickWithdrawView::readUserChoice() {
	int choice = InputValidation::readIntegerInRange("\nSelect an option : ", QuickWithdrawOptions::QW_100, QuickWithdrawOptions::QW_BackToMainMenu);
	dispatchChoice(choice);
}

void QuickWithdrawView::dispatchChoice(int choice) {
	QuickWithdrawController controller;
	controller.handleQuickWithdraw(choice);
}