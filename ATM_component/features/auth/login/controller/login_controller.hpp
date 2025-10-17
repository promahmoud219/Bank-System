#pragma once
#include <string>
#include "core_library\types\operation_result.hpp"

class LoginController{ 
private:
	bool handleLoginResult(LoginResult& result, LoginPresenter& presenter) const;
	void displayLoginView() const;

public:
	void run() const;
};