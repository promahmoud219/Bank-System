#pragma once
#include "account_component/entity/account.hpp"

class IAccountRepository {
public:
    virtual bool createAccount(const Account& account) = 0;
    virtual Account* searchAccount(const std::string& id) = 0;
    virtual bool updateAccount(const Account& account) = 0;
    virtual bool deleteAccount(const std::string& id) = 0;
    virtual bool save(const Account& account) = 0;
    virtual ~IAccountRepository() = default;
};