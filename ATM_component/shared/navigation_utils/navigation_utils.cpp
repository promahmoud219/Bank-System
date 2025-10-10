#include "ATM_component/shared/navigation_utils/navigation_utils.hpp"
#include "ATM_component/features/main_menu/view/main_menu_view.hpp"

void NavigationUtils::goToMainMenu() {
    MainMenuView mainMenuView;
    mainMenuView.render();
}
