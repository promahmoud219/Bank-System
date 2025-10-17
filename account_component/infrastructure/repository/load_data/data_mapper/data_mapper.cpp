#include "data_mapper.hpp"
#include <iostream>
#include <stdexcept>

std::vector<std::shared_ptr<Account>> DataMapper::mapToAccounts(
    const std::vector<std::vector<std::string>>& records)
{
    std::vector<std::shared_ptr<Account>> accounts;

    for (const auto& row : records) {
        if (row.size() < 4) {
            std::cerr << "[DataMapper] Warning: malformed record, skipping...\n";
            continue;
        }

        try {
            std::string id = row[0];
            std::string clientId = row[1];
            std::string pin = row[2];
            double balance = std::stod(row[3]);

            accounts.push_back(std::make_shared<Account>(id, clientId, balance, pin));
        }
        catch (...) {
            std::cerr << "[DataMapper] Error parsing record.\n";
        }
    }

    return accounts;
}
