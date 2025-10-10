#include <iostream>
#include "login_presenter.hpp"
#include "ATM_component/features/auth/login/types/login_result.hpp"
#include "ATM_component/features/main_menu/view/main_menu_view.hpp"
#include "ATM_component/features/auth/login/view/login_view.hpp"
#include "ATM_component/ui_utils/ui_utils.hpp"

void LoginPresenter::present(LoginResult result) {
	if (result.success) {
		MainMenuView mainMenu;
		mainMenu.render();
	}
	else {
		std::cout << "\nInvalid account number or PIN. Please try again.\n";
		UiUtils::pressEnterToContinue();
		LoginView login;
		login.render();
	}
}