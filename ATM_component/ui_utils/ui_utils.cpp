#include <iostream>
#include "ui_utils.hpp"

void UiUtils::printLine () {
		std::cout << "==============================================";
}

void UiUtils::pressEnterToContinue() {
    std::cout << "\nPress Enter to continue...";
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin.get();
}
