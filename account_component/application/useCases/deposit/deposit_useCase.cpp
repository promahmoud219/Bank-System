#include "deposit_useCase.hpp"
#include "account_component/entity/account.hpp"
#include <memory>
OperationResult DepositUseCase::execute(std::shared_ptr<Account> account, double amount) const {
    if (account == nullptr)
        return OperationResult::Failure("? Invalid account reference.");


    if (amount <= 0)
        return OperationResult::Failure("? Deposit amount must be greater than 0.");

    account->deposit(amount);

    return OperationResult::Success("? Deposit successful.");
}
