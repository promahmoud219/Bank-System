#include <iostream>
#include "withdraw_presenter.hpp"
#include "ATM_component/ui_utils/ui_utils.hpp"

void WithdrawPresenter::present(OperationResult& result) {

#ifdef DEBUG
	std::cout << "\nthis is presenter of withdraw\n";
	std::cin.get();
#endif // DEBUG

	if (result.success)
		std::cout << "\nWithdraw done successfully \n";
	else
		std::cout << "\nWithdraw failed: " << result.message << "\n";

	std::cin.get();
	UiUtils::pressEnterToContinue();
}