// withdraw_screen.hpp

#pragma once
#include "../screen/screen.hpp"

class WithdrawScreen : public Screen {
public:
	WithdrawScreen() : Screen("Withdraw") {}
	void show() override;
};