#include "quick_withdraw_controller.hpp"
#include "ATM_component/session/session_manager.hpp"
#include "account_component/application/useCases/withdraw/withdraw_useCase.hpp"
#include "ATM_component/features/transactions/types/transaction_result.hpp"
#include "ATM_component/features/transactions/quick_withdraw/presenter/quick_withdraw_presenter.hpp"
#include "ATM_component/features/transactions/quick_withdraw/types/quick_withdraw_options.hpp"
#include "ATM_component/features/main_menu/view/main_menu_view.hpp"
#include "ATM_component/shared/navigation_utils/navigation_utils.hpp"

void QuickWithdrawController::handleQuickWithdraw(int choice) {

    if (choice == QuickWithdrawOptions::QW_BackToMainMenu) 
		NavigationUtils::goToMainMenu();

    Account* account = SessionManager::getCurrentAccount();
	
    WithdrawUseCase useCase; 
    QuickWithdrawPresenter presenter;
	        
    OperationResult result = useCase.execute(*account, mapChoiceToAmount(choice));
	presenter.present(result);
    NavigationUtils::goToMainMenu();
}

double QuickWithdrawController::mapChoiceToAmount(int choice) const {
    switch (choice) {
    case QuickWithdrawOptions::QW_100: return 100;
    case QuickWithdrawOptions::QW_200: return 200;
    case QuickWithdrawOptions::QW_400: return 400;
    case QuickWithdrawOptions::QW_800: return 800;
    case QuickWithdrawOptions::QW_1000: return 1000;
    case QuickWithdrawOptions::QW_2000: return 2000;
    default: return 0;
    }
}


