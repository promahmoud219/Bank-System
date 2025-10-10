#include <iostream>
#include "withdraw_presenter.hpp"
#include "ATM_component/ui_utils/ui_utils.hpp"

void WithdrawPresenter::present(OperationResult& result) {
	std::cout << "\nWithdraw done successfully \n";
	UiUtils::pressEnterToContinue();
}