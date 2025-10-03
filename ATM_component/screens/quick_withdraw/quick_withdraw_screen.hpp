// quick_withdraw.hpp

#pragma once
#include "../screen/screen.hpp"

class QuickWithdrawScreen : public Screen {
public:
	QuickWithdrawScreen() : Screen("Quick Withdraw") {}
	void show() override;
private:
	void showMenu();
};
