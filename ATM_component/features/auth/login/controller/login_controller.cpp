#include <string>
#include "login_controller.hpp"
#include "ATM_component/features/auth/login/usecases/login_useCase.hpp"
#include "ATM_component/session/session_manager.hpp"
#include "ATM_component/features/auth/login/presenter/login_presenter.hpp"
#include "ATM_component/features/auth/login/types/login_input.hpp"
#include "ATM_component/features/auth/login/types/login_result.hpp"

void LoginController::handleLogin(LoginInput& input) const {
    LoginUseCase usecase;
    LoginResult result = usecase.execute(input);	
	LoginPresenter presenter;
	presenter.present(result);
}