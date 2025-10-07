#pragma once
#include <string>
#include "account_component/entity/account.hpp"
#include "ATM_component/features/login/types/login_result.hpp"

class LoginUseCase {
public:
    LoginResult execute(const std::string& accountId, const std::string& pin) const;
};
