#include "check_balance_presenter.hpp"
#include "ATM_component/ui_utils/output_utils/output_utils.hpp"
#include <iostream>

void CheckBalancePresenter::present(CheckBalanceResult result) const {
#ifdef DEBUG
	std::cout << "\nthis is CheckBalancePresenter::present()\n";
	std::cin.get();
#endif // DEBUG

	if (result.success)
		std::cout << result.message << "\nNew Balance is: " << result.balance << " \n";
	else
		std::cout << result.message << "\n";

	std::cin.get();
	OutputUtils::pressEnterToContinue();
}