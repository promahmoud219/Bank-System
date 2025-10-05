#pragma once
#include "../../../shared/base_view.hpp"

class MainMenuView : public BaseView {
public:
	MainMenuView() : BaseView("Main Menu") {}
	void render() override;

private:
	void printMenuItems() const;
	void displayOptions() const;

}; 