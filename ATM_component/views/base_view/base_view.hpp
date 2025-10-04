#pragma once
#include <string>
#include <iostream>
#include "../../../core_library/input_validation/input_validation.hpp"
class BaseView {
protected:
    std::string title;
public:
    BaseView(const std::string& t) : title(t) {}

    virtual void render() = 0;  

    void printHeader() const {
        std::cout << "==============================================";
        std::cout << "\n\t\t" << title << std::endl;
        std::cout << "==============================================\n";
    }

    void clear() {
		system("cls");  
    }

};
