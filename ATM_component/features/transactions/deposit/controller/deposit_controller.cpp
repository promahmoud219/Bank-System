#include <iostream>
#include "deposit_controller.hpp"
#include "account_component/entity/account.hpp"
#include "account_component/application/useCases/deposit/deposit_useCase.hpp"
#include "ATM_component/session/session_manager.hpp"

void DepositController::handleDeposit(double amount) {
    Account* account = SessionManager::getCurrentAccount();
    DepositUseCase useCase;
    OperationResult result = useCase.execute(account, amount);
}