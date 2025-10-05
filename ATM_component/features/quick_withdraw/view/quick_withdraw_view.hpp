#pragma once
#include "../../../shared/base_view.hpp"

class QuickWithdrawView : public BaseView {
public:
	QuickWithdrawView() : BaseView("Quick Withdraw") {}
	void render() override;
private:
	void displayOptions() const;
	void promptForSelection();

};
