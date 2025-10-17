#include "search_account.hpp"
#include "account_component/infrastructure/repository/load_data/load_data/load_data.hpp"
#include <iostream>

std::shared_ptr<Account> AccountRepository::searchAccount(const std::string& id) const {
    for (const auto& accPtr : accounts) {
        if (accPtr && accPtr->getAccountID() == id)
            return accPtr;
    }
    return nullptr;
}

bool AccountRepository::createAccount(const Account&) { return false; }
bool AccountRepository::updateAccount(const Account&) { return false; }
bool AccountRepository::deleteAccount(const std::string&) { return false; }
bool AccountRepository::save(const Account&) { return false; }
