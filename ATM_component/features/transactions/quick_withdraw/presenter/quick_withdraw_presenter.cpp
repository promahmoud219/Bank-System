#include <iostream>
#include "quick_withdraw_presenter.hpp"
#include "core_library/types/operation_result.hpp"
#include "ATM_component/ui_utils/ui_utils.hpp"
#include "ATM_component/features/main_menu/view/main_menu_view.hpp"

void QuickWithdrawPresenter::present(const OperationResult& result) const {

#ifdef DEBUG
	std::cout << "\nthis is presenter of withdraw\n";
	std::cin.get();
#endif // DEBUG

	if(result.success)
		std::cout << "\nWithdraw done successfully \n";
	else
		std::cout << "\nWithdraw failed: " << result.message << "\n";

	std::cin.get();
	UiUtils::pressEnterToContinue();
}

