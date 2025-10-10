#include <iostream>
#include "logout_view.hpp"
#include "core_library/input_validation/input_validation.hpp"
#include "ATM_component/features/auth/logout/controller/logout_controller.hpp"
#include "ATM_component/ui_utils/ui_utils.hpp"

void LogoutView::render() {
    std::string msg = "\nAre you sure you want to log out?";
	bool agree = InputValidation::askYesNo(msg);

    if (agree) {
		LogoutController controller;
        controller.handleLogout();
		UiUtils::pressEnterToContinue();
    }
    else 
        std::cout << "Logout cancelled.\n";
}