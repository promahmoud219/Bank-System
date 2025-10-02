// deposit.hpp

#pragma once
#include "../screen/screen.hpp"

class Deposit : public Screen {
public:
	Deposit() : Screen("Deposit") {}
	void show() override;
private:
	void printMenuItems();
};