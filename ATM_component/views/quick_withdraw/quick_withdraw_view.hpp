// quick_withdraw.hpp

#pragma once
#include "../screen/screen.hpp"

class QuickWithdrawView : public Screen {
public:
	QuickWithdrawView() : Screen("Quick Withdraw") {}
	void render() override;
private:
	void displayOptions();
	void promptForSelection();

};
