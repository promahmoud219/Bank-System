#pragma once
#include "ATM_component/features/auth/logout/controller/logout_controller.hpp"
#include "ICommand.hpp"

class LogoutCommand : public ICommand {
public:
    void execute() const override {
        LogoutController{}.run();
    }
};
