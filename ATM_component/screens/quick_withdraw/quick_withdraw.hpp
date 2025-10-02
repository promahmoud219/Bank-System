// quick_withdraw.hpp

#pragma once

class QuickWithdraw : public Screen {
public:
	QuickWithdraw() : Screen("Quick Withdraw") {}
	void show() override;
private:
	void showMenu();
};
