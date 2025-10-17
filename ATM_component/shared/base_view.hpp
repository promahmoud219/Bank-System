#pragma once
#include <string>
#include <iostream>
#include <chrono>
#include <ctime>
#include "ATM_component/ui_utils/ui_utils.hpp"

class BaseView {
private:
    std::string title;
    static void clear() {
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

        std::string timeStr = std::ctime(&time);
        if (!timeStr.empty() && timeStr.back() == '\n')
            timeStr.pop_back();

        std::cout << "Current time: " << timeStr << "\n";
    }

public:
    explicit BaseView(const std::string& t) : title(t) {}  
    void render() const {        
        clear();
        printHeader();
        showClock();
        UiUtils::printLine();
    }
};
