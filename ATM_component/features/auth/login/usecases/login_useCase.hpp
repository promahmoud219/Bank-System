#pragma once
#include "ATM_component/features/auth/login/types/login_input.hpp"
#include "account_component/application/interfaces/IAccountRepository/repo_interface.hpp"
#include "ATM_component/features/auth/login/types/login_result.hpp"

class LoginUseCase {
private:
    std::shared_ptr<IAccountRepository> repo;
public:
    explicit LoginUseCase(std::shared_ptr<IAccountRepository> r) : repo(std::move(r)) {}
    LoginResult execute(const LoginInput& input) const;
};