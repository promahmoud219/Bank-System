// ATM_component/controllers/main_menu/main_menu_controller.cpp

#include "main_menu_controller.hpp"
#include "../../screens/quick_withdraw/quick_withdraw_screen.hpp"
#include "../../screens/withdraw/withdraw_screen.hpp"
#include "../../screens/transfer/transfer_screen.hpp"
#include "../../screens/deposit/deposit_screen.hpp"
#include "../../screens/balance/balance_screen.hpp"

void MainMenuController::handleChoice(int choice) {
    switch (choice) {
    case 1: {
        QuickWithdrawScreen screen;
        screen.show();
        break;
    }
    case 2: {
        WithdrawScreen screen;
        screen.show();
        break;
    }
    case 3: {
        DepositScreen screen;
        screen.show();
        break;
    }
    case 4: {
        BalanceScreen screen;
        screen.show();
        break;
    }
    case 5: {
        TransferScreen screen;
        screen.show();
        break;
    }
    case 6:
        std::cout << "\nLogging out...\n";
        break;

    default:
        std::cout << "\nInvalid choice.\n";
        break;
    }
}
