// deposit.hpp

#pragma once
#include "../screen/screen.hpp"

class DepositScreen : public Screen {
public:
	DepositScreen() : Screen("Deposit") {}
	void show() override;
private:
	void printMenuItems();
	void showMenu();

};