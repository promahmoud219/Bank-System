#pragma once
#include "ATM_component/shared/base_view.hpp"

class MainMenuView : public BaseView {
public:
	MainMenuView() : BaseView("Main Menu") {}
	void render() override;

private:
	void printMenuItems() const;
	void displayOptions() const;

}; 