#pragma once
#include "core_library/types/operation_result.hpp"
#include <memory>

class Account;
class WithdrawController {
private: 
	bool confirmWithdrawal(double amount) const;
	void renderView() const;
	std::shared_ptr<Account> getCurrentAccount() const;
	OperationResult performWithdraw(std::shared_ptr<Account>& account, double amount) const;
	void presentResult(OperationResult result) const;
public:
	void run();
};