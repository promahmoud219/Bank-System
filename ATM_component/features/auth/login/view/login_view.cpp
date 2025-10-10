#include "login_view.hpp"
#include "ATM_component/features/auth/login/controller/login_controller.hpp"
#include "ATM_component/features/main_menu/view/main_menu_view.hpp"
#include "ATM_component/ui_utils/ui_utils.hpp"
#include "ATM_component/features/auth/login/types/login_input.hpp"
#include "core_library/input_validation/input_validation.hpp"
#include "core_library/types/operation_result.hpp"

void LoginView::render() {
	clear();
	printHeader();
	LoginInput input = readLoginInput();

	LoginController login_controller;
	login_controller.handleLogin(input);
}

LoginInput LoginView::readLoginInput() {
    LoginInput input;
    input.accountID = InputValidation::readString("Enter Account Number: ");
    input.pinCode = InputValidation::readString("Enter PIN: ");
    return input;
}