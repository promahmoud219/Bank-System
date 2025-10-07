#pragma once
#include "account_component/entity/account.hpp"
#include "core_library/types/operation_result.hpp"

class TransferUseCase {
public:
    OperationResult execute(Account* sender, Account* receiver, double amount) const;
};
