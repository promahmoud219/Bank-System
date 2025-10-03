// main_menu.hpp
#pragma once

#include "../base_view/base_view.hpp"

class MainMenuView : public Screen{
public:
	MainMenuView() : Screen("Main Menu") {}
	void render() override;

private:
	void printMenuItems();
	void displayMenu(); 

};