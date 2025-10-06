#pragma once
#include <string>

class LoginController{ 
public:
	bool handleLogin(const std::string& accountId, int pin);
};