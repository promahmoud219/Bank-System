#include <iostream>
#include "withdraw_view.hpp"
#include "ATM_component/ui_utils/ui_utils.hpp"
#include "ATM_component/features/transactions/withdraw/controller/withdraw_controller.hpp"
#include "core_library/input_validation/input_validation.hpp"

void WithdrawView::render() {
	showHeader();
	int amount = InputValidation::readPositiveInteger("\nEnter amount: ");
	goToController(amount);
}

void WithdrawView::showHeader() const {
	clear();
	printHeader();
	UiUtils::printLine();
}

void WithdrawView::goToController(int amount) {
	WithdrawController controller;
	controller.handleWithdraw(amount);
}