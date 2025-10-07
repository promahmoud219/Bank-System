#pragma once 
#include "ATM_component/shared/base_view.hpp"

class LoginView : public BaseView {
	void showLoginScreen() const;
public:
	LoginView() : BaseView("Login") {};
	void render() override;

};