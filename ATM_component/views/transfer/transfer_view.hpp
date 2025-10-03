// transfer_screen.hpp

#pragma once 
#include "../screen/screen.hpp"
class TransferView : public Screen {
public:
	TransferView() : Screen("Transfer") {};
	void render() override;
};