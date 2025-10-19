#include "login_view.hpp"
#include "ATM_component/features/auth/login/controller/login_controller.hpp"
#include "ATM_component/features/main_menu/view/main_menu_view.hpp"
#include "ATM_component/ui_utils/input_utils/input_utils.hpp"
#include "ATM_component/features/auth/login/types/login_input.hpp"
#include "core_library/types/operation_result.hpp"

LoginInput LoginView::readLoginInput() {
    LoginInput input;
    input.accountID = InputUtils::readString("Enter Account Number: ");
    input.pinCode = InputUtils::readString("Enter PIN: ");
    return input;
}