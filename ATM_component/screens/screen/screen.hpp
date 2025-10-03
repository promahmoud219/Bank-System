// Screen.hpp
#pragma once
#include <string>
#include <iostream>
#include "../../../core_library/input_validation/input_validation.hpp"
class Screen {
protected:
    std::string title;
public:
    Screen(const std::string& t) : title(t) {}

    virtual void show() = 0;  

    void printHeader() const {
        std::cout << "==============================================";
        std::cout << "\n\t\t" << title << std::endl;
        std::cout << "==============================================\n";
    }

    void clear() {
		system("cls");  
    }

};
