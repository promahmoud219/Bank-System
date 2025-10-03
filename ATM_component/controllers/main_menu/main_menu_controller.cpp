// ATM_component/controllers/main_menu/main_menu_controller.cpp

#include "main_menu_controller.hpp"
#include "../../screens/quick_withdraw/quick_withdraw_view.hpp"
#include "../../screens/withdraw/withdraw_view.hpp"
#include "../../screens/transfer/transfer_view.hpp"
#include "../../screens/deposit/deposit_view.hpp"
#include "../../screens/balance/check_balance_view.hpp"
#include "../../types/main_menu_options.hpp"

void MainMenuController::handleUserSelection(int choice) {
	MainMenuOptions option = static_cast<MainMenuOptions>(choice);
    switch (option) {
    case MainMenuOptions::QUICK_WITHDRAW: {
        QuickWithdrawView screen;
        screen.render();
        break;
    }
    case MainMenuOptions::WITHDRAW : {
        WithdrawView screen;
        screen.render();
        break;
    }
    case MainMenuOptions::DEPOSIT: {
        DepositView screen;
        screen.render();
        break;
    }
    case MainMenuOptions::CHECK_BALANCE: {
        CheckBalanceView screen;
        screen.render();
        break;
    }
    case MainMenuOptions::TRANSFER: {
        TransferView screen;
        screen.render();
        break;
    }
    case MainMenuOptions::LOGOUT:
        std::cout << "\nLogging out...\n";
        break;

    default:
        std::cout << "\nInvalid choice.\n";
        break;
    }
}
