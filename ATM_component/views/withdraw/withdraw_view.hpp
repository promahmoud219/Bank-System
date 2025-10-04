#pragma once
#include "../base_view/base_view.hpp"

class WithdrawView : public BaseView{
public:
	WithdrawView() : BaseView("Withdraw") {}
	void render() override;
};