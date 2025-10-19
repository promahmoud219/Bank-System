#pragma once
#include "ATM_component/features/transactions/withdraw/controller/withdraw_controller.hpp"
#include "ICommand.hpp"

class WithdrawCommand : public ICommand {
public:
    void execute() const override {
        WithdrawController{}.run();
    }
};
