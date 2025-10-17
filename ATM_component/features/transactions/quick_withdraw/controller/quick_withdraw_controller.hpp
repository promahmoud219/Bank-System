#pragma once

#include <memory>
#include "account_component/entity/account.hpp" // Make sure this is included for std::shared_ptr<Account>
#include "ATM_component/features/transactions/quick_withdraw/types/quick_withdraw_options.hpp"
#include "core_library/input_reader/input_reader.hpp"

class QuickWithdrawController {
private:
    bool confirmWithdrawal(double amount) const;
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
