#include "repository_provider.hpp"

std::shared_ptr<IAccountRepository> RepositoryProvider::accountRepo = nullptr;

std::shared_ptr<IAccountRepository> RepositoryProvider::getAccountRepo() {
    if (!accountRepo) {
        accountRepo = std::make_shared<IAccountRepository>();
        accountRepo->loadData("account_component/infrastructure/database/accounts.csv");
    }
    return accountRepo;
}

void RepositoryProvider::reload() {
    if (accountRepo)
        accountRepo->loadData("account_component/infrastructure/database/accounts.csv");
}