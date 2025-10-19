#pragma once
#include <string>
#include <iostream>
#include <chrono>
#include <ctime>
#include "ATM_component/ui_utils/output_utils/output_utils.hpp"

class BaseView {
private:
    std::string title;

protected:  
    const std::string& getTitle() const { return title; }

    void printHeader() const {
        OutputUtils::printLine();
        std::cout << "\n\t\t" << title << std::endl;
        OutputUtils::printLine();
    }

    void showClock() const {
        auto now = std::chrono::system_clock::now();
        std::time_t time = std::chrono::system_clock::to_time_t(now);
        std::cout << "Current time: " << std::ctime(&time);
    }

public:
    explicit BaseView(const std::string& t) : title(t) {}  
    void render() {        
        OutputUtils::clear();
        printHeader();
        showClock();
        OutputUtils::printLine();
    }
};