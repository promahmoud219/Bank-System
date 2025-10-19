#include "login_useCase.hpp"
#include "ATM_component/features/auth/login/types/login_result.hpp"
#include "account_component/application/interfaces/IAccountRepository/repo_interface.hpp"
#include <memory>

LoginUseCase::LoginUseCase(std::shared_ptr<IAccountRepository> r) : repo(std::move(r)) {}

LoginResult LoginUseCase::execute(const LoginInput& input) const {

    std::shared_ptr<Account> acc = repo->searchAccount(input.accountID);

    if (!acc) 
        return LoginResult::Failure(LoginResultCode::ACCOUNT_NOT_FOUND);
    if (!acc->checkPinCode(input.pinCode)) 
        return LoginResult::Failure(LoginResultCode::INVALID_PIN);
    
    return LoginResult::Success(acc);
}