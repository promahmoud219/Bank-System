#include "logout_view.hpp"
#include <iostream>

void LogoutView::render() {
    clear();
    printHeader();

    std::cout << "\nLogging out...\n";
    SessionManager::clear();

    std::cout << "\n? You have been logged out successfully.\n";
    UiUtils::pressEnterToContinue();
}
