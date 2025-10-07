#pragma once
#include "account_component/entity/account.hpp"

class WithdrawUseCase {
public:
	bool execute(Account& account, double amount);
};