#include "ATM_component/shared/navigation_utils/navigation_utils.hpp"
#include "ATM_component/features/main_menu/controller/main_menu_controller.hpp"

void NavigationUtils::navigateToMainMenu() {
	MainMenuController controller;
	controller.run();
}