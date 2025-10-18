#pragma once
#include <string>
#include "core_library\types\operation_result.hpp"
#include "ATM_component/features/auth/login/types/login_input.hpp"
#include "ATM_component/features/auth/login/types/login_result.hpp"
#include "ATM_component/features/auth/login/presenter/login_presenter.hpp"
#include <memory>

class LoginController{ 
private:
	bool handleLoginResult(LoginResult& result, LoginPresenter& presenter) const;
	void renderView() const;
	void presentResult(LoginResult result) const;
	LoginResult performLogging(
		std::shared_ptr<IAccountRepository>& repo,
		const LoginInput& input
	) const;
public:
	void run() const;
};