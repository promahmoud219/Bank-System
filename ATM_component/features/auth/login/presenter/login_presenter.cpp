#include <iostream>
#include "login_presenter.hpp"
#include "ATM_component/ui_utils/output_utils/output_utils.hpp"

void LoginPresenter::present(LoginResult result) {
	if (result.success)	
		std::cout << "\nLogin successful. Welcome! ";
	else 
		std::cout << "\nInvalid account number or PIN. Please try again.\n";
	
#ifdef DEBUG
	std::cout << "\n[DEBUG] in present.\n";
	std::cin.get();
#endif

	OutputUtils::pressEnterToContinue();
}