// transfer_screen.hpp

#pragma once 
#include "../screen/screen.hpp"
class TransferScreen : public Screen {
public:
	TransferScreen() : Screen("Transfer") {};
	void show() override;
};