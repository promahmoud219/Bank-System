#pragma once
#include "../../../shared/base_view.hpp"

class WithdrawView : public BaseView{
public:
	WithdrawView() : BaseView("Withdraw") {}
	void render() override;
};