#include "withdraw_useCase.hpp"
#include <iostream>

OperationResult WithdrawUseCase::execute(Account& account, double amount) {
    std::cout << "this is withdraw usecase\n";
    if (!account.withdraw(amount))
        return OperationResult::Failure("Balance is not sufficient");
    return OperationResult::Success("Withdraw Successful");

}