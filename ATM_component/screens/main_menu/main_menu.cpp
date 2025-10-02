#include "main_menu.hpp"
#include "../../ui_utils/ui_utils.hpp"


void MainMenu::printMenuItems() {
    std::cout << "\n\t[1] Quick Withdraw.";
    std::cout << "\n\t[2] Normal Withdraw.";
    std::cout << "\n\t[3] Deposit.";
    std::cout << "\n\t[4] Check Balance.";
    std::cout << "\n\t[5] Logout.\n";
}
 
void MainMenu::show() {
    clear();         
    printHeader();   
    printMenuItems();
    UiUtils::printLine();
}
