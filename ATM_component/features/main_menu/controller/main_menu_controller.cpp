#include "main_menu_controller.hpp"
#include "ATM_component/features/main_menu/types/main_menu_options.hpp"
#include "ATM_component/features/quick_withdraw/view/quick_withdraw_view.hpp"
#include "ATM_component/features/withdraw/view/withdraw_view.hpp"
#include "ATM_component/features/transfer/view/transfer_view.hpp"
#include "ATM_component/features/deposit/view/deposit_view.hpp"
#include "ATM_component/features/check_balance/view/check_balance_view.hpp"
#include "ATM_component/features/logout/view/logout_view.hpp"

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
    case LOGOUT: {
        LogoutView screen;
        screen.render();
        break;
    }
    default:
        std::cout << "\nInvalid choice.\n";
        break;
    }
}
