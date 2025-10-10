#include "quick_withdraw_controller.hpp"
#include "ATM_component/session/session_manager.hpp"
#include "account_component/application/useCases/withdraw/withdraw_useCase.hpp"
#include "ATM_component/features/transactions/types/transaction_result.hpp"
#include "ATM_component/features/transactions/quick_withdraw/presenter/quick_withdraw_presenter.hpp"

void QuickWithdrawController::handleQuickWithdraw(double amount) {
	Account* account = SessionManager::getCurrentAccount();
	WithdrawUseCase useCase;
	OperationResult result = useCase.execute(*account, amount);
	QuickWithdrawPresenter presenter;
	presenter.present(result);
}