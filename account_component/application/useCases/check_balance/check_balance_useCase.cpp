#include "check_balance_useCase.hpp"

CheckBalanceResult CheckBalanceUseCase::execute(Account& account) {
	return CheckBalanceResult::Success(account.getBalance());
}