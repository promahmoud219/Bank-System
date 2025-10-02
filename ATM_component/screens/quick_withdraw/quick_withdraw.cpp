// quick_withdraw.cpp

#include <iostream>
#include "quick_withdraw.hpp"
#include "../../ui_utils/ui_utils.hpp"

void QuickWithdraw::showMenu{
	std::cout << "[1] 20		[2] 50   \n";
	std::cout << "[3] 100		[4] 200  \n";
	std::cout << "[5] 400		[6] 600  \n";
	std::cout << "[7] 800		[8] 1000 \n";
	std::cout << "[9] Exit				 \n";
};

void QuickWithdraw::show() {
	clear();
	printHeader();
	showMenu();
	UiUtils::printLine();

}

