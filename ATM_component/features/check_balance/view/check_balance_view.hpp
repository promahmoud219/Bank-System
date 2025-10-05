#pragma once
#include "../../../shared/base_view.hpp"

class CheckBalanceView : public BaseView {
public: 
	CheckBalanceView() : BaseView("Check Balance Screen") {}
	void render() override;
};