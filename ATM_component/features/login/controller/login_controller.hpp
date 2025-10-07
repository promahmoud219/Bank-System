#pragma once
#include <string>

class LoginController{ 
public:
	bool handleLogin(const std::string& accountId, const std::string& pin) const;
};