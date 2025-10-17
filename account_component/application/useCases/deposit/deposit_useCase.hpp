#pragma once
#include "account_component/entity/account.hpp" 
#include "core_library/types/operation_result.hpp"
#include <memory>

class DepositUseCase {
public:
    OperationResult execute(std::shared_ptr<Account> account, double amount) const;
};
