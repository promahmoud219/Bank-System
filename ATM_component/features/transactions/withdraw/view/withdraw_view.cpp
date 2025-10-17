#include <iostream>
#include "withdraw_view.hpp"
#include "ATM_component/ui_utils/ui_utils.hpp"
#include "ATM_component/features/transactions/withdraw/controller/withdraw_controller.hpp"
#include "core_library/input_reader/input_reader.hpp"  

void WithdrawView::goToController(int amount) {
	WithdrawController controller;
	controller.run();
}