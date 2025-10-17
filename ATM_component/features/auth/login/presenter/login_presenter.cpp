#include <iostream>
#include "login_presenter.hpp"
#include "ATM_component/features/auth/login/types/login_result.hpp"
#include "ATM_component/ui_utils/ui_utils.hpp"
 
void LoginPresenter::present(LoginResult result) {
	if (result.success) {
		std::cout << "\nLogin successful. Welcome!\n";
		std::cin.get();
	}
	else {
		std::cout << "\nInvalid account number or PIN. Please try again.\n";
		std::cin.get();
	}
	std::cout << "\nin present";
	std::cin.get();
	UiUtils::clear();
	UiUtils::pressEnterToContinue();
}