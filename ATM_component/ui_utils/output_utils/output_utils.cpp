#include "output_utils.hpp"
#include <iostream>

void OutputUtils::printLine() {
    std::cout << "==============================================";
}

void OutputUtils::pressEnterToContinue() {
    std::cout << "\nPress Enter to continue...";
    std::cin.get();
}

void OutputUtils::clear() {
    #ifdef _WIN32
            std::system("cls");
    #else
            std::system("clear");
    #endif
}