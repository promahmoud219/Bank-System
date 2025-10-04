#pragma once
#include "../base_view/base_view.hpp"

class QuickWithdrawView : public BaseView {
public:
	QuickWithdrawView() : BaseView("Quick Withdraw") {}
	void render() override;
private:
	void displayOptions();
	void promptForSelection();

};
