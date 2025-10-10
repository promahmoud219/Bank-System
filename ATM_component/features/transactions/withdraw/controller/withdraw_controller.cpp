#include "withdraw_controller.hpp"
#include "core_library/types/operation_result.hpp"
#include "account_component/application/useCases/withdraw/withdraw_useCase.hpp"
#include "account_component/entity/account.hpp"
#include "ATM_component/session/session_manager.hpp"
#include "ATM_component/features/transactions/withdraw/presenter/withdraw_presenter.hpp"

void WithdrawController::handleWithdraw(int amount) {
	Account* account = SessionManager::getCurrentAccount();
	WithdrawUseCase useCase; 
	WithdrawPresenter presenter;
	OperationResult result = useCase.execute(*account, amount);
	presenter.present(result);	
}