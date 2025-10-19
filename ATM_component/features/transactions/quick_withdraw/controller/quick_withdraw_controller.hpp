#pragma once

#include <memory>
#include "account_component/entity/account.hpp" 
#include "ATM_component/features/transactions/quick_withdraw/types/quick_withdraw_options.hpp"

class QuickWithdrawController {
private:
    bool isBackToMainMenu(int choice) const;
    std::shared_ptr<Account> getCurrentAccount() const;
    double mapChoiceToAmount(int choice) const;
    OperationResult performWithdrawal(Account& account, double amount) const;
    void presentResult(OperationResult result) const;
    void renderView() const;
    int readUserChoice() const;
public:
    void run() const;
};
