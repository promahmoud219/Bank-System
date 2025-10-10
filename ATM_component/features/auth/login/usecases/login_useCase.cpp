#include "login_useCase.hpp"
#include "ATM_component/features/auth/login/types/login_result.hpp"
#include "account_component/infrastructure/repository/search_account/search_account.hpp"
#include "account_component/entity/account.hpp"
#include "ATM_component/features/auth/login/types/login_input.hpp"

LoginResult LoginUseCase::execute(LoginInput& input) const {
    AccountRepository repo;
    Account* acc = repo.searchAccount(input.accountID);

    if (acc == nullptr)
        return LoginResult::Failure(LoginResultCode::ACCOUNT_NOT_FOUND);

    if (!acc->checkPinCode(input.pinCode))
        return LoginResult::Failure(LoginResultCode::INVALID_PIN);

    return LoginResult::Success(acc);
}