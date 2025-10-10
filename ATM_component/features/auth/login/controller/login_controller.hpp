#pragma once
#include <string>
#include "core_library\types\operation_result.hpp"
#include "ATM_component/features/auth/login/types/login_input.hpp"

class LoginController{ 
public:
	void handleLogin(LoginInput& input) const;
};