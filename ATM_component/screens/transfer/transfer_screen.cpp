//transfer_screen.cpp
#include <iostream>
#include "transfer_screen.hpp"
#include "../../ui_utils/ui_utils.hpp"

void TransferScreen::show() {
	clear();
	printHeader();
	UiUtils::printLine();
	std::cout << "\nTransfer Screen - Under Construction\n";
}