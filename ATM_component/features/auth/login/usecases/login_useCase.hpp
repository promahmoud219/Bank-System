#pragma once
#include <string>
#include "account_component/entity/account.hpp"
#include "ATM_component/features/auth/login/types/login_result.hpp"
#include "ATM_component/features/auth/login/types/login_input.hpp"

class LoginUseCase {
public:
    LoginResult execute(LoginInput& input) const;
};
