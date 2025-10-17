#pragma once
#include <string>
#include <vector>
#include <memory>
#include "account_component/entity/account.hpp"

class LoadData {
public:
    static std::vector<std::shared_ptr<Account>> fromCSV(const std::string& filePath);
};
