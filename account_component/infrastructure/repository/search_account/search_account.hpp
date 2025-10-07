#pragma once
#include "account_component/entity/account.hpp"
#include "account_component/application/interfaces/IAccountRepository/repo_interface.hpp"
#include <vector>
#include <string>

class AccountRepository : public IAccountRepository {
private:
    std::vector<Account> accounts;

    void loadDataFromFile();

public:
    AccountRepository();  

    Account* searchAccount(const std::string& id) override;
    bool createAccount(const Account&) override;
    bool updateAccount(const Account&) override;
    bool deleteAccount(const std::string&) override;
    bool save(const Account&) override;
};
