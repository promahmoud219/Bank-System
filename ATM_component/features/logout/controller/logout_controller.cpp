#include "logout_controller.hpp"
#include "ATM_component/session/session_manager.hpp"

void LogoutController::handleLogout() {
	SessionManager::logout();
}