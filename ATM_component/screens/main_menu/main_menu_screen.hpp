// main_menu.hpp
#pragma once

#include "../screen/screen.hpp"

class MainMenuScreen : public Screen{
public:
	MainMenuScreen() : Screen("Main Menu") {}
	void show() override;

private:
	void printMenuItems();
	void showMenu();
	void pressEnterToContinue();

};