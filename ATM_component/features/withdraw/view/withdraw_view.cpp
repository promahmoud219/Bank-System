#include "withdraw_view.hpp"
#include <iostream>
#include "ATM_component/ui_utils/ui_utils.hpp"

void WithdrawView::render() {
	clear();
	printHeader();
	std::cout 
		<< "adding the option en every screen to go back, "
		<< "how to do it so instead of saying go to main menu i can say Back : -)"
		<< "maybe a function in screen class that all screens can use\n"
		<< "like printBackOption() that prints [0] Back to Main Menu\n"
		<< "and then in readOption() function of screen class i can change the range to 0 to 5\n"
		<< "and if user enters 0 i can return to main menu\n"
		<< "just an idea to think about it later\n"
		<< "so, i'm thinking of making it as a menu, instead of a function in "
		<< "screen class, what do you think?\n";
	UiUtils::printLine();
	std::cout << "\nWithdraw Screen - Under Construction\n";
}