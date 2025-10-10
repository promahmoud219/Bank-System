#pragma once
#include "ATM_component/features/transactions/quick_withdraw/types/quick_withdraw_options.hpp"

class QuickWithdrawController {
private:
	double mapChoiceToAmount(int choice) const;
public:
	void handleQuickWithdraw(int choice);
};