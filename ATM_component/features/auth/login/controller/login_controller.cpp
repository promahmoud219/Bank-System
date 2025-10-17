#include <string>
#include <iostream>

#include "login_controller.hpp"
#include "ATM_component/features/auth/login/usecases/login_useCase.hpp"
#include "ATM_component/features/auth/login/presenter/login_presenter.hpp"
#include "ATM_component/features/auth/login/types/login_input.hpp"
#include "ATM_component/features/auth/login/types/login_result.hpp"
#include "ATM_component/features/auth/login/view/login_view.hpp"
#include "ATM_component/features/main_menu/controller/main_menu_controller.hpp"
#include "ATM_component/session/session_manager.hpp"
#include "ATM_component/shared/repository_provider/repository_provider.hpp"
#include "ATM_component/shared/navigation_utils/navigation_utils.hpp"
#include "ATM_component/ui_utils/ui_utils.hpp"

void LoginController::run() const {

	displayLoginView();
	
	auto repo = RepositoryProvider::getAccountRepo();
    LoginUseCase usecase(repo);
	
	LoginResult result;
	LoginPresenter presenter;

	do {
		auto input = LoginView::readLoginInput();
		result = usecase.execute(input);
		handleLoginResult(result, presenter);
	} while (!handleLoginResult(result, presenter));

	NavigationUtils::navigateToMainMenu();
}

void LoginController::displayLoginView() const {
	LoginView view;
	view.render();
}

bool LoginController::handleLoginResult(LoginResult& result, LoginPresenter& presenter) const {
	if (result.success) {
		SessionManager::setCurrentAccount(result.account);
#ifdef DEBUG
		std::cout << "\n[DEBUG] Session set successfully.\n";
		std::cin.get();
#endif
	}
	presenter.present(result);
}