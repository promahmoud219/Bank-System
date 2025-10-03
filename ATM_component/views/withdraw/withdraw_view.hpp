// withdraw_screen.hpp

#pragma once
#include "../screen/screen.hpp"

class WithdrawView : public Screen {
public:
	WithdrawView() : Screen("Withdraw") {}
	void render() override;
};