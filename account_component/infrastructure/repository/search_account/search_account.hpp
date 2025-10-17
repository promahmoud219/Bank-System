#pragma once
#include <vector>
#include <memory>
#include <filesystem>
#include <string>
#include "account_component/entity/account.hpp"

class AccountRepository {
private:
    std::vector<std::shared_ptr<Account>> accounts;

public:
    std::shared_ptr<Account> searchAccount(const std::string& id) const;

    void loadData(const std::filesystem::path& base_path = {});
    bool createAccount(const Account&);
    bool updateAccount(const Account&);
    bool deleteAccount(const std::string&);
    bool save(const Account&);
};
