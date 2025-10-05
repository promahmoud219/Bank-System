#include "login_view.hpp"
#include "../controller/login_controller.hpp"
#include "../../../Ui_Utils/ui_utils.hpp"
#include "../../../main_menu/view/main_menu_view.hpp"
#include "../../../../core_library/input_validation/input_validation.hpp"

void LoginView::render() {
	showLoginScreen();
	std::string accountID = InputValidation::readString("Enter Account Number: ");
	int pin = InputValidation::readPositiveInteger("Enter PIN: ");
	
	LoginController login_controller;
	bool success = login_controller.handleLogin(accountID, pin);
	if (success) {
		MainMenuView mainMenu;
		mainMenu.render();
	}
	else
		{
		std::cout << "\nInvalid account number or PIN. Please try again.\n";
		UiUtils::pressEnterToContinue();
		render();
	}

}

void LoginView::showLoginScreen() const {
	clear();
	printHeader();
}
