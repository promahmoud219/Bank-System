#pragma once
#include <vector>
#include <memory>
#include "account_component/entity/account.hpp"

class DataMapper {
public:
    static std::vector<std::shared_ptr<Account>> mapToAccounts(
        const std::vector<std::vector<std::string>>& records);
};
