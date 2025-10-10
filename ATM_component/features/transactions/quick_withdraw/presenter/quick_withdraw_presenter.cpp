#include <iostream>
#include "quick_withdraw_presenter.hpp"
#include "core_library/types/operation_result.hpp"
#include "ATM_component/ui_utils/ui_utils.hpp"
#include "ATM_component/features/main_menu/view/main_menu_view.hpp"

void QuickWithdrawPresenter::present(const OperationResult& result) const {
	std::cout << "\nWithdraw done successfully \n";
	UiUtils::pressEnterToContinue();
}

