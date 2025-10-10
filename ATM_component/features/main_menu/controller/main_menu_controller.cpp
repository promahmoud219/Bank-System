#include "main_menu_controller.hpp"
#include "ATM_component/features/transactions/quick_withdraw/view/quick_withdraw_view.hpp"
#include "ATM_component/features/transactions/withdraw/view/withdraw_view.hpp"
#include "ATM_component/features/transactions/transfer/view/transfer_view.hpp"
#include "ATM_component/features/transactions/deposit/view/deposit_view.hpp"
#include "ATM_component/features/auth/logout/view/logout_view.hpp"
#include "ATM_component/features/main_menu/types/main_menu_options.hpp"
#include "ATM_component/features/check_balance/view/check_balance_view.hpp"

void MainMenuController::handleUserSelection(int choice) const {
	auto option = static_cast<MainMenuOptions>(choice);
    switch (option) {
	using enum MainMenuOptions;
    case QUICK_WITHDRAW: {
        QuickWithdrawView view;
        view.render();
        break;
    }
    case WITHDRAW : {
        WithdrawView view;
        view.render();
        break;
    }
    case DEPOSIT: {
        DepositView view;
        view.render();
        break;
    }
    case CHECK_BALANCE: {
        CheckBalanceView view;
        view.render();
        break;
    }
    case TRANSFER: {
        TransferView view;
        view.render();
        break;
    }
    case LOGOUT: {
        LogoutView view;
        view.render();
        break;
    }
    default:
        std::cout << "\nInvalid choice.\n";
        break;
    }
}
