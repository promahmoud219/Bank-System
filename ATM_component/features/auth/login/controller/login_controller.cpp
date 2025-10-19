#include <string>
#include <iostream>
#include "login_controller.hpp"
#include "ATM_component/features/auth/login/usecases/login_useCase.hpp"
#include "ATM_component/features/auth/login/presenter/login_presenter.hpp"
#include "ATM_component/features/auth/login/types/login_result.hpp"
#include "ATM_component/features/auth/login/view/login_view.hpp"
#include "ATM_component/features/main_menu/controller/main_menu_controller.hpp"
#include "ATM_component/session/session_manager.hpp"
#include "ATM_component/shared/repository_provider/repository_provider.hpp"
#include "ATM_component/shared/navigation_utils/navigation_utils.hpp"

void LoginController::run() const {

	auto repo = RepositoryProvider::getAccountRepo();

	LoginResult result;

	do {
		renderView();
		auto input = LoginView::readLoginInput();
		result = performLogging(repo, input);
		presentResult(result);
	} while (!result.success);

	NavigationUtils::navigateToMainMenu();
}

void LoginController::renderView() const {

#ifdef DEBUG
	std::cout << "\n[DEBUG] renderView().\n";
	std::cin.get();
#endif

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

void LoginController::presentResult(LoginResult result) const {
    LoginPresenter presenter;
    presenter.present(result);
}

LoginResult LoginController::performLogging(
	std::shared_ptr<IAccountRepository>& repo,
	const LoginInput& input
) const {
	LoginUseCase usecase(repo);
	return usecase.execute(input);
}