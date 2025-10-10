#include "search_account.hpp"
#include <fstream>
#include <sstream>
#include <filesystem>
#include <iostream>

AccountRepository::AccountRepository() {
    loadDataFromFile();
}

void AccountRepository::loadDataFromFile() {
    namespace fs = std::filesystem;

    fs::path exePath = fs::current_path();  
    fs::path dataPath = exePath / "account_component" / "infrastructure" / "database" / "accounts.csv";

    std::ifstream file(dataPath);
    //std::ifstream file("account_component/infrastructure/database/accounts.csv");

    if (!file.is_open()) {
        std::cerr << "[AccountRepository] Warning: Could not open accounts.txt. Starting with empty list.\n";
        return;
    }

    std::string line;
    while (std::getline(file, line)) {
        if (line.empty()) continue;

        std::stringstream ss(line);
        std::string id, clientId, pin;
        double balance = 0.0;

        ss >> id >> clientId >> pin >> balance;

        if (!id.empty()) {
            Account acc(id, clientId, balance, pin);
            accounts.push_back(acc);
        }
    }

    file.close();
}

Account* AccountRepository::searchAccount(const std::string& id) {
    for (auto& acc : accounts)
        if (acc.getAccountID() == id)
            return &acc;
    return nullptr;
}

bool AccountRepository::createAccount(const Account&) { return false; }
bool AccountRepository::updateAccount(const Account&) { return false; }
bool AccountRepository::deleteAccount(const std::string&) { return false; }
bool AccountRepository::save(const Account&) { return false; }
