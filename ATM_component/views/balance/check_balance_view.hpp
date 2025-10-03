// ATM_component/screens/balance/balance_screen.cpp

#pragma once
#include "../screen/screen.hpp"

class CheckBalanceView : public Screen {
public: 
	CheckBalanceView() : Screen("Check Balance Screen") {}
	void render() override;
};