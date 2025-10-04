#pragma once

#include "../base_view/base_view.hpp"

class MainMenuView : public BaseView {
public:
	MainMenuView() : BaseView("Main Menu") {}
	void render() override;

private:
	void printMenuItems();
	void displayOptions(); 

}; 