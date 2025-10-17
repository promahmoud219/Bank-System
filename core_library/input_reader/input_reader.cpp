#include "input_validation.hpp"
#include <iostream>
#include <string>
#include <limits>
#include <cctype>

int InputReader::readPositiveInteger(const std::string& prompt) {
    int number;
    while (true) {
        std::cout << prompt;
        std::cin >> number;

        if (std::cin.fail() || number < 0) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter a positive number.\n";
        }
        else {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return number;
        }
    }
}

std::string InputReader::readString(const std::string& prompt) {
    std::string input;
    std::cout << prompt;
    //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::getline(std::cin, input);
    return input;
}

char InputReader::readYesNo(const std::string& message) {
    std::cout << message << " (y/n): ";
    char choice;
    std::cin >> choice;
    return static_cast<char>(std::tolower(static_cast<unsigned char>(choice)));
}
    
int InputReader::readIntegerInRange(const std::string& message, int min, int max) {
    int number = 0;
    do {
        std::cout << message;
        std::cin >> number;
    } while (number < min || number > max);
    return number;
}

int InputReader::readInteger(const std::string& message) {
    int number = 0;
    std::cout << message;
    std::cin >> number;
    return number;
}

bool InputReader::askYesNo(const std::string& prompt) {
    char choice;
    while (true) {
        std::cout << prompt << " (y/n): ";
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        choice = static_cast<char>(std::tolower(static_cast<unsigned char>(choice)));
        if (choice == 'y') return true;
        if (choice == 'n') return false;
        std::cout << "Invalid input. Please enter 'y' or 'n'.\n";
    }
}
