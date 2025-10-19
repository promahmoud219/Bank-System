#include "check_balance_controller.hpp"
#include "ATM_component/features/check_balance/view/check_balance_view.hpp"
#include "ATM_component/features/check_balance/presenter/check_balance_presenter.hpp"
#include "ATM_component/session/session_manager.hpp"
#include "ATM_component/shared/navigation_utils/navigation_utils.hpp"

void CheckBalanceController::run() const {
	renderView();
	auto account = getCurrentAccount();
    if (!account) {
        presentResult(CheckBalanceResult::Failure("No active session. Please log in first."));
        return;
    }
    auto result = performCheckBalance(*account);

	presentBalance();
	NavigationUtils::navigateToMainMenu();
}

std::shared_ptr<Account> CheckBalanceController::getCurrentAccount() const {
#ifdef DEBUG
    std::cout << "\n[DEBUG] Account ID in session: " << account->getAccountID() << "\n";
    std::cin.get();
#endif
    auto account = SessionManager::getCurrentAccount();
    return account;
}


void CheckBalanceController::renderView() const {
    CheckBalanceView view;
    view.render();
}

void CheckBalanceController::presentResult(CheckBalanceResult result) const {
    CheckBalancePresenter presenter;
    presenter.present(result);
}


CheckBalanceResult CheckBalanceController::performCheckBalance(Account& account) const {
#ifdef DEBUG
    std::cout << "\n[DEBUG] Performing check balance use case...\n";
    std::cin.get();
#endif

    CheckBalanceUseCase useCase;
    return useCase.execute(account);
}