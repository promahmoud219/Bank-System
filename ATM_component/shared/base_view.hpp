#pragma once
#include <string>
#include <iostream>
#include "core_library/input_validation/input_validation.hpp"

class BaseView {
private: // ??? protected
    std::string title;

protected:
    // ?? ????? ??????? ?????? ???????
    const std::string& getTitle() const { return title; }

    void printHeader() const {
        std::cout << "==============================================";
        std::cout << "\n\t\t" << title << std::endl;
        std::cout << "==============================================\n";
    }

    void clear() const { // const ???
        system("cls");
    }

public:
    explicit BaseView(const std::string& t) : title(t) {} // explicit

    virtual void render() = 0;

};
