#pragma once
#include "account_component/entity/account.hpp"
#include "core_library/types/operation_result.hpp"

class WithdrawUseCase {
public:
	OperationResult execute(Account& account, double amount);
};