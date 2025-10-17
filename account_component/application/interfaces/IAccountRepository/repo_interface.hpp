#pragma once
#include "account_component/entity/account.hpp"
#include <string>
#include <memory> 
#include <filesystem>

class IAccountRepository {
public:
    virtual bool createAccount(const Account& account) = 0;
    virtual std::shared_ptr<Account> searchAccount(const std::string& id) const = 0;
    virtual bool updateAccount(const Account& account) = 0;
    virtual bool deleteAccount(const std::string& id) = 0;
    virtual bool save(const Account& account) = 0;
    virtual void loadData(const std::filesystem::path& base_path) = 0;
    virtual ~IAccountRepository() = default;
};
