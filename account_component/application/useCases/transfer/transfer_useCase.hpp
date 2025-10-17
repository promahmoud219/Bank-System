#pragma once
#include "account_component/entity/account.hpp"
#include "core_library/types/operation_result.hpp"
#include <memory>

class TransferUseCase {
public:
    OperationResult execute(std::shared_ptr<Account> sender, std::shared_ptr<Account> receiver, double amount) const;
};
