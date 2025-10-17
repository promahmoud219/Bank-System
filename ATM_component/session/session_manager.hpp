#pragma once
#include <memory>
#include "account_component/entity/account.hpp"

class SessionManager {
private:
    static inline std::shared_ptr<Account> currentAccount = nullptr;
public:
    static void setCurrentAccount(std::shared_ptr<Account> account) {
        currentAccount = std::move(account);
    }
    static std::shared_ptr<Account> getCurrentAccount() {
        return currentAccount;
    }
    static void logout() {
        currentAccount.reset();
    }
    static bool isLoggedIn() {
        return static_cast<bool>(currentAccount);
    }
};
