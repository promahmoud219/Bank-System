#pragma once

#include <memory>
#include "account_component/entity/account.hpp" // Make sure this is included for std::shared_ptr<Account>
#include "ATM_component/features/transactions/quick_withdraw/types/quick_withdraw_options.hpp"

class QuickWithdrawController {
private:
    // Helper methods for modular logic
    double mapChoiceToAmount(int choice) const;
    void displayView() const;
    int readUserChoice() const;
    bool isBackToMainMenu(int choice) const;
    std::shared_ptr<Account> getCurrentAccount() const;
    bool confirmWithdrawal(double amount) const;
    void handleCancelledWithdrawal() const;
    void performWithdrawal(Account& account, double amount) const;

public:
    void run() const;
    void handle(int choice) const;
};
