#pragma once
#include "account_component/application/interfaces/IAccountRepository/repo_interface.hpp"
#include <memory>

class RepositoryProvider{
private:
    static std::shared_ptr<IAccountRepository> accountRepo;
public:
    static std::shared_ptr<IAccountRepository> getAccountRepo();
    static void reload();
};
    