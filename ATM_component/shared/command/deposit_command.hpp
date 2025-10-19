#pragma once
#include "ATM_component/features/transactions/deposit/controller/deposit_controller.hpp"
#include "ICommand.hpp"

class DepositCommand : public ICommand {
public:
    void execute() const override {
        DepositController{}.run();
    }
};
