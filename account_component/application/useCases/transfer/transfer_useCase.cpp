#include <memory>
#include "transfer_useCase.hpp"

OperationResult TransferUseCase::execute(std::shared_ptr<Account> sender, std::shared_ptr<Account> receiver, double amount) const {
    if (sender == nullptr || receiver == nullptr || amount <= 0)
        return OperationResult::Failure("? Invalid transfer parameters.");

    if (sender->getBalance() < amount)
        return OperationResult::Failure("? Insufficient funds in sender account.");

    sender->withdraw(amount);
    receiver->deposit(amount);

    return OperationResult::Success("Transfer completed successfully");
}
