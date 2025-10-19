#pragma once
#include "ATM_component/features/check_balance/controller/check_balance_controller.hpp"
#include "ICommand.hpp"

class CheckBalanceCommand : public ICommand {
public:
    void execute() const override {
        CheckBalanceController{}.run();
    }
};
