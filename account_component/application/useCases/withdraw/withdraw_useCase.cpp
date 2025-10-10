#include "withdraw_useCase.hpp"


OperationResult WithdrawUseCase::execute(Account& account, double amount) {
    if (!account.withdraw(amount))
        return OperationResult::Failure("Balance is not sufficient");
    return OperationResult::Success("Withdraw Successful");
}
