#pragma once 
#include "account_component/entity/account.hpp"
#include "account_component/application/useCases/check_balance/check_balance_result.hpp"

class CheckBalanceUseCase {
public:
	CheckBalanceResult execute(Account& account);
};