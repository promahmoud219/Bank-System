#pragma once 
#include <memory>
#include "ATM_component/features/check_balance/types/check_balance_result.hpp"

class CheckBalanceController {
private:
	void renderView() const;
	std::shared_ptr<Account> getCurrentAccount() const;
	void presentResult(CheckBalanceResult result) const;
	CheckBalanceResult performCheckBalance(Account& account) const;
public:
	void run() const;
};