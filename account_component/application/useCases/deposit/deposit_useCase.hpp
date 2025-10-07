#pragma once
#include "account_component/entity/account.hpp" 
#include "core_library/types/operation_result.hpp"

class DepositUseCase {
public:
    OperationResult execute(Account* account, double amount) const;
};
