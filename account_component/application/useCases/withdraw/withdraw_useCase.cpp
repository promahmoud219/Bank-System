#include "withdraw_useCase.hpp"


bool WithdrawUseCase::execute(Account& account, double amount) {
    if (!account.withdraw(amount))
        return false;

    /*repo.update(account);
    transactionLogger.logWithdrawal(account.getAccountID(), amount);*/

    return true;
}
