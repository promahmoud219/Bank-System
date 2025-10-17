#pragma once
#include "ATM_component/shared/base_view/base_view.hpp"

class DepositView : public BaseView {
public:
	DepositView() : BaseView("Deposit") {}
	void render() override;
private:
	void printMenuItems() const;
	void showMenu() const;

};