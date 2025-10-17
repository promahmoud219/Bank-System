#include "withdraw_controller.hpp"
#include "ATM_component/features/transactions/withdraw/presenter/withdraw_presenter.hpp"
#include "ATM_component/features/transactions/withdraw/view/withdraw_view.hpp"
#include "ATM_component/shared/navigation_utils/navigation_utils.hpp"
#include "ATM_component/session/session_manager.hpp"
#include "account_component/application/useCases/withdraw/withdraw_useCase.hpp"
#include "account_component/entity/account.hpp"
#include "core_library/input_reader/input_reader.hpp"
#include "core_library/types/operation_result.hpp"
#include <iostream>


void WithdrawController::run() {
	renderView();
	double amount = InputReader::readPositiveInteger("\nEnter amount to withdraw: ");
	

	if (!confirmWithdrawal(amount)) {
		presentResult(OperationResult::Failure("Withdrawal cancelled."));
		return;
	}

	auto account = getCurrentAccount();
	if (!account) {
		presentResult(OperationResult::Failure("No active session. Please log in first."));
		return;
	}

	auto result = performWithdraw(account, amount);
	presentResult(result);
	NavigationUtils::navigateToMainMenu();

}

OperationResult WithdrawController::performWithdraw(std::shared_ptr<Account>& account, double amount) const {
	WithdrawUseCase useCase;
	return useCase.execute(*account, amount);
}

void WithdrawController::renderView() const {

#ifdef DEBUG
	std::cout << "\n[DEBUG] renderView().\n";
	std::cin.get();
#endif

	WithdrawView view;
	view.render();
}

bool WithdrawController::confirmWithdrawal(double amount) const {
	std::string message = "Confirm withdrawal of $" + std::to_string(amount) + "? (y/n): ";
	char choice = InputReader::readYesNo(message);
	return choice == 'y' || choice == 'Y';
}
 
std::shared_ptr<Account> WithdrawController::getCurrentAccount() const {
	auto account = SessionManager::getCurrentAccount();
	if (!account) {
		std::cerr << "\n[ERROR] No active session. Please log in first.\n";
		return nullptr;
	}
#ifdef DEBUG
	std::cout << "[DEBUG] Account loaded successfully.\n";
#endif
	return account;
}

void WithdrawController::presentResult(OperationResult result) const {
	WithdrawPresenter presenter;
	presenter.present(result);
}         