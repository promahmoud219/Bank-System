#pragma once
#include "ATM_component/shared/base_view/base_view.hpp"

class MainMenuView : public BaseView {
public:
	MainMenuView() : BaseView("Main Menu") {}
	void printMenuItems() const;
}; 