/*
bool FileAccountRepository::updateAccount(const Account& account) {
    std::vector<Account> accounts = loadAllAccounts();

    for (auto& acc : accounts) {
        if (acc.getId() == account.getId()) {
            acc = account; // replace old with updated
            saveAll(accounts);
            return true;
        }
    }
    return false;
}

*/