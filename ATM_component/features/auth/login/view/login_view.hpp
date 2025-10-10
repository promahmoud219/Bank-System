#pragma once 
#include "ATM_component/shared/base_view.hpp"
#include "ATM_component/features/auth/login/types/login_input.hpp"
 
class LoginView : public BaseView {
public:
	LoginView() : BaseView("Login") {};
	void render() override;
private:
		LoginInput readLoginInput();
};
