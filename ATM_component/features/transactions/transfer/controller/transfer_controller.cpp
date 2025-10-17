#include <iostream>
#include "transfer_controller.hpp"
#include "account_component/application/useCases/transfer/transfer_useCase.hpp"
#include "ATM_component/session/session_manager.hpp"
#include "account_component/infrastructure/repository/search_account/search_account.hpp"

void TransferController::run(const std::string& receiverID, double amount) {
    std::shared_ptr<Account> sender = SessionManager::getCurrentAccount();
    AccountRepository repo;
    std::shared_ptr<Account> receiver = repo.searchAccount(receiverID);

    TransferUseCase useCase;
    OperationResult result = useCase.execute(sender, receiver, amount);

    std::cout << result.message << "\n";
}