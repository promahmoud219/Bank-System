#include "login_view.hpp"
#include "ATM_component/features/login/controller/login_controller.hpp"
#include "ATM_component/features/main_menu/view/main_menu_view.hpp"
#include "ATM_component/Ui_Utils/ui_utils.hpp"
#include "core_library/input_validation/input_validation.hpp"

void LoginView::render() {
	showLoginScreen();
	std::string accountID = InputValidation::readString("Enter Account Number: ");
	std::string pin = InputValidation::readString("Enter PIN: ");
	
	LoginController login_controller;
	bool success = login_controller.handleLogin(accountID, pin);
	if (success) {
		MainMenuView mainMenu;
		mainMenu.render();
	}
	else{
		std::cout << "\nInvalid account number or PIN. Please try again.\n";
		UiUtils::pressEnterToContinue();
		render();
	}
}

void LoginView::showLoginScreen() const {
	clear();
	printHeader();
}