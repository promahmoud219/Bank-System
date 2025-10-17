#pragma once 
#include "ATM_component/shared/base_view/base_view.hpp"
#include "ATM_component/features/auth/login/types/login_input.hpp"

class LoginView : public BaseView {
public:
	LoginView() : BaseView("ATM Login") {}
	static LoginInput readLoginInput();
};
