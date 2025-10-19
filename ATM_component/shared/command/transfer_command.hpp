#pragma once
#include "ATM_component/features/transactions/transfer/controller/transfer_controller.hpp"
#include "ICommand.hpp"

class TransferCommand : public ICommand {
public:
    void execute() const override {
        TransferController{}.run();
    }
};
