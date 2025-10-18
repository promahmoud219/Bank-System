#include "quick_withdraw_controller.hpp"
#include "ATM_component/session/session_manager.hpp"
#include "account_component/application/useCases/withdraw/withdraw_useCase.hpp"
#include "ATM_component/features/transactions/types/transaction_result.hpp"
#include "ATM_component/features/transactions/quick_withdraw/presenter/quick_withdraw_presenter.hpp"
#include "ATM_component/features/transactions/quick_withdraw/view/quick_withdraw_view.hpp"
#include "ATM_component/features/transactions/quick_withdraw/types/quick_withdraw_options.hpp"
#include "ATM_component/features/main_menu/view/main_menu_view.hpp"
#include "ATM_component/shared/navigation_utils/navigation_utils.hpp"
#include "ATM_component/ui_utils/input_utils/input_utils.hpp"
#include <iostream>

void QuickWithdrawController::run() const {
    renderView();
    int choice = readUserChoice();

    if (isBackToMainMenu(choice)) {
        NavigationUtils::navigateToMainMenu();
        return;
    }  

    double amount = mapChoiceToAmount(choice);
    
    if (!confirmWithdrawal(amount)) {
        presentResult(OperationResult::Failure("Withdrawal cancelled."));
        return;
    }
    
    auto account = getCurrentAccount();
    if (!account) {
		presentResult(OperationResult::Failure("No active session. Please log in first."));
        return;
    }

    auto result = performWithdrawal(*account, amount);
    presentResult(result);
    NavigationUtils::navigateToMainMenu();
}

double QuickWithdrawController::mapChoiceToAmount(int choice) const {
    switch (choice) {
    case QuickWithdrawOptions::QW_100: return 100;
    case QuickWithdrawOptions::QW_200: return 200;
    case QuickWithdrawOptions::QW_400: return 400;
    case QuickWithdrawOptions::QW_800: return 800;
    case QuickWithdrawOptions::QW_1000: return 1000;
    case QuickWithdrawOptions::QW_2000: return 2000;
    default: return 0;
    }
}

void QuickWithdrawController::renderView() const {
    QuickWithdrawView view;
    view.render();
    view.printOptions();
}

int QuickWithdrawController::readUserChoice() const {
    return InputUtils::readIntegerInRange(
        "\nSelect an option : ",
        QuickWithdrawOptions::QW_100,
        QuickWithdrawOptions::QW_BackToMainMenu
    );
}

bool QuickWithdrawController::isBackToMainMenu(int choice) const {
    return choice == QuickWithdrawOptions::QW_BackToMainMenu;
}

std::shared_ptr<Account> QuickWithdrawController::getCurrentAccount() const {
    auto account = SessionManager::getCurrentAccount();
#ifdef DEBUG
    std::cout << "\n[DEBUG] Account ID in session: " << account->getAccountID() << "\n";
    std::cin.get();
#endif
    return account;
}

bool QuickWithdrawController::confirmWithdrawal(double amount) const {
    return InputUtils::confirm("Confirm Withdraw of " + std::to_string(amount) + "?");
}

OperationResult QuickWithdrawController::performWithdrawal(Account& account, double amount) const {
    WithdrawUseCase useCase;

#ifdef DEBUG
    std::cout << "\nExecuting withdrawal use case...\n";
    std::cin.get();
#endif

    return useCase.execute(account, amount);
}

void QuickWithdrawController::presentResult(OperationResult result) const {
    QuickWithdrawPresenter presenter;
    presenter.present(result);
}
