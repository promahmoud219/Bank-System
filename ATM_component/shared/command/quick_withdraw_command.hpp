#pragma once
#include "ATM_component/features/transactions/quick_withdraw/controller/quick_withdraw_controller.hpp"
#include "ICommand.hpp"

class QuickWithdrawCommand : public ICommand {
public:
    void execute() const override {
        QuickWithdrawController{}.run();
    }
};
