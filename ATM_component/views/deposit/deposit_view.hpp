// deposit.hpp

#pragma once
#include "../screen/screen.hpp"

class DepositView : public Screen {
public:
	DepositView() : Screen("Deposit") {}
	void render() override;
private:
	void printMenuItems();
	void showMenu();

};