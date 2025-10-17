#pragma once
#include <string>
#include <iostream>
#include <chrono>
#include <ctime>
#include "ATM_component/ui_utils/ui_utils.hpp"

class BaseView {
private:
    std::string title;
    void clear() const {
    #ifdef _WIN32
            system("cls");
    #else
            system("clear");
    #endif
    }


protected:  
    const std::string& getTitle() const { return title; }

    void printHeader() const {
        std::cout << "==============================================";
        std::cout << "\n\t\t" << title << std::endl;
        std::cout << "==============================================\n";
    }

    void showClock() const {
        auto now = std::chrono::system_clock::now();
        std::time_t time = std::chrono::system_clock::to_time_t(now);
        std::cout << "Current time: " << std::ctime(&time);
    }




public:
    explicit BaseView(const std::string& t) : title(t) {}  
    //virtual void drawContent() = 0;
    void render() {        
        clear();
        printHeader();
        showClock();
        UiUtils::printLine();
    }
};
