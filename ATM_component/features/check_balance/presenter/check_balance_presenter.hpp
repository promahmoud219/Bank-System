#pragma once 
#include "account_component/application/useCases/check_balance/check_balance_result.hpp"

class CheckBalancePresenter {
public:
	void present(CheckBalanceResult result) const;
};