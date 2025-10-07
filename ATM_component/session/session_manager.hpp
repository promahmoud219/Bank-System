#pragma once
#include "account_component/entity/account.hpp"

class SessionManager {
private:
    static inline Account* currentAccount = nullptr;

public:
    static void setCurrentAccount(Account* account) {
        currentAccount = account;
    }

    static Account* getCurrentAccount() {
        return currentAccount;
    }

    static void logout() {
        currentAccount = nullptr;
    }

    static bool isLoggedIn() {
        return currentAccount != nullptr;
    }
};
