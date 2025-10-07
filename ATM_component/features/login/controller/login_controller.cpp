#include <string>
#include "login_controller.hpp"
#include "account_component/application/useCases/login/login_useCase.hpp"
#include "ATM_component/session/session_manager.hpp"
#include "ATM_component/features/login/types/login_result.hpp"

bool LoginController::handleLogin(const std::string& accountID, const std::string& pinCode) const {
    LoginUseCase usecase;
    LoginResult result = usecase.execute(accountID, pinCode);

    if (result.success) {
        SessionManager::setCurrentAccount(result.account);
        return true;
    } 
    else 
        return false;
} 