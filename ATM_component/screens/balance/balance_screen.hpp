// ATM_component/screens/balance/balance_screen.cpp

#pragma once
#include "../screen/screen.hpp"

class BalanceScreen : public Screen {
public: 
	BalanceScreen() : Screen("Check Balance Screen") {}
	void show() override;
};