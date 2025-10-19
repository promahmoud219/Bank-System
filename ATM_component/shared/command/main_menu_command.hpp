#pragma once
#include "ATM_component/features/main_menu/controller/main_menu_controller.hpp"
#include "ICommand.hpp"

class MainMenuCommand: public ICommand {
public:
    void execute() const override {
        MainMenuController{}.run();
    }
};