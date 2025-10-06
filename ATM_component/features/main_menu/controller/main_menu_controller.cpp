#include "main_menu_controller.hpp"
#include "../types/main_menu_options.hpp"
#include "../../quick_withdraw/view/quick_withdraw_view.hpp"
#include "../../withdraw/view/withdraw_view.hpp"
#include "../../transfer/view/transfer_view.hpp"
#include "../../deposit/view/deposit_view.hpp"
#include "../../check_balance/view/check_balance_view.hpp"

void MainMenuController::handleUserSelection(int choice) const {
	auto option = static_cast<MainMenuOptions>(choice);
    switch (option) {
	using enum MainMenuOptions;
    case QUICK_WITHDRAW: {
        QuickWithdrawView screen;
        screen.render();
        break;
    }
    case WITHDRAW : {
        WithdrawView screen;
        screen.render();
        break;
    }
    case DEPOSIT: {
        DepositView screen;
        screen.render();
        break;
    }
    case CHECK_BALANCE: {
        CheckBalanceView screen;
        screen.render();
        break;
    }
    case TRANSFER: {
        TransferView screen;
        screen.render();
        break;
    }
    case LOGOUT:
        std::cout << "\nLogging out...\n";
        break;

    default:
        std::cout << "\nInvalid choice.\n";
        break;
    }
}
