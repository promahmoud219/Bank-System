// main_menu.hpp
#pragma once

#include "../screen/screen.hpp"

class MainMenu : public Screen{
public:
	MainMenu() : Screen("Main Menu") {}
	void show() override;

private:
	void printMenuItems();
};