#pragma once
#include "ATM_component/shared/base_view/base_view.hpp"

class WithdrawView : public BaseView{
	void showHeader() const;
	void goToController(int amount);
public:
	WithdrawView() : BaseView("Withdraw") {}
};