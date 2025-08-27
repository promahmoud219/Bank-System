//! validation.cpp


#include "validation.hpp"

#include <string>
#include <iostream>
#include <limits>


namespace validation {
    int ReadPositiveNumber(const std::string& prompt) {
        
        int number;

        while (true) {
            std::cout << prompt;
            std::cin >> number;

            if (std::cin.fail() || number < 0) {
                std::cin.clear(); // clear the error flag
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
                std::cout << "Invalid input. Please enter a positive number.\n";
            } else {
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // remove extra input
                return number;
            }
        }
    }



    std::string ReadString(const std::string& prompt) {
        std::string input;
        std::cout << prompt;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // ✅ flush newline from previous input
        std::getline(std::cin, input);
        return input;
    }

    char ReadYesNo(const std::string& message) {
        char choice{};
        while (true) {
            std::cout << message << " [y/n]: ";
            std::cin >> choice;

            // Normalize to lowercase
            choice = static_cast<char>(std::tolower(choice));

            if (tolower(choice) == 'y' || tolower(choice) == 'n') {
                return tolower(choice);
            }

            std::cout << "❌ Invalid input. Please enter 'y' or 'n'.\n";
        }
    }

    
    int ReadNumberInRange (std::string message, int min, int max) {

        int number = 0;

        do
        {
            std::cout << message;
            std::cin >> number;

        } while (number < min || number > max);
        
        return number;
    }

    int ReadNumber (std::string message) {

        int number = 0;
        
        std::cout << message;
        std::cin >> number;

        return number;
    }
    bool AskYesNo(const std::string& prompt) {

        char choice;

        while (true) {
            std::cout << prompt << " (y/n): ";
            std::cin >> choice;

            // Clear leftover input if user typed more than one char
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

            choice = static_cast<char>(std::tolower(static_cast<unsigned char>(choice)));
            if (choice == 'y') return true;
            if (choice == 'n') return false;

            std::cout << "Invalid input. Please enter 'y' or 'n'.\n";
        }
    }
}