#pragma once
#include "ATM_component/shared/base_view/base_view.hpp"

class QuickWithdrawView : public BaseView {
public:
	QuickWithdrawView() : BaseView("Quick Withdraw") {}
	void printOptions() const;
	int readChoice() const;
};
