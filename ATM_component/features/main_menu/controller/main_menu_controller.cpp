//#include "main_menu_controller.hpp"
//#include "ATM_component/features/main_menu/view/main_menu_view.hpp"
//#include "ATM_component/features/transactions/quick_withdraw/view/quick_withdraw_view.hpp"
//#include "ATM_component/features/transactions/withdraw/view/withdraw_view.hpp"
//#include "ATM_component/features/transactions/transfer/view/transfer_view.hpp"
//#include "ATM_component/features/transactions/deposit/view/deposit_view.hpp"
//#include "ATM_component/features/auth/logout/view/logout_view.hpp"
//#include "ATM_component/features/main_menu/types/main_menu_options.hpp"
//#include "ATM_component/features/check_balance/view/check_balance_view.hpp"
//#include "core_library/input_reader/input_reader.hpp"
//
//void MainMenuController::handleUserSelection(int choice) const {
//	auto option = static_cast<MainMenuOptions>(choice);
//    switch (option) {
//	using enum MainMenuOptions;
//    case QUICK_WITHDRAW: {
//        QuickWithdrawView view;
//        view.render();
//        break;
//    }
//    case WITHDRAW : {
//        WithdrawView view;
//        view.render();
//        break;
//    }
//    case DEPOSIT: {
//        DepositView view;
//        view.render();
//        break;
//    }
//    case CHECK_BALANCE: {
//        CheckBalanceView view;
//        view.render();
//        break;
//    }
//    case TRANSFER: {
//        TransferView view;
//        view.render();
//        break;
//    }
//    case LOGOUT: {
//        LogoutView view;
//        view.render();
//        break;
//    }
//    default:
//        std::cout << "\nInvalid choice.\n";
//        break;
//    }
//}
//
//void MainMenuController::run() const {
//    int choice = 0;
//    const int logoutOption = static_cast<int>(MainMenuOptions::LOGOUT);
//    MainMenuView view;
//    do {
//        view.render();
//        view.printMenuItems();
//        choice = InputReader::readIntegerInRange("\nSelect an option : ", 1, logoutOption);
//        handleUserSelection(choice);
//        if (choice != logoutOption) {
//            return; 
//        }
//    } while (choice != logoutOption);
//}

#include "main_menu_controller.hpp"
#include "ATM_component/features/main_menu/view/main_menu_view.hpp"

#include "ATM_component/features/transactions/quick_withdraw/controller/quick_withdraw_controller.hpp"
#include "ATM_component/features/transactions/withdraw/controller/withdraw_controller.hpp"
#include "ATM_component/features/transactions/transfer/controller/transfer_controller.hpp"
#include "ATM_component/features/transactions/deposit/controller/deposit_controller.hpp"
#include "ATM_component/features/auth/logout/controller/logout_controller.hpp"
#include "ATM_component/features/check_balance/controller/check_balance_controller.hpp"

#include "ATM_component/features/main_menu/types/main_menu_options.hpp"
#include "core_library/input_reader/input_reader.hpp"

void MainMenuController::handleUserSelection(int choice) const {
    auto option = static_cast<MainMenuOptions>(choice);

    switch (option) {
        using enum MainMenuOptions;
    case QUICK_WITHDRAW: {
        QuickWithdrawController controller;
        controller.run(); 
        break;
    }
    case WITHDRAW: {
        WithdrawController controller;
        controller.run(); 
        break;
    }
    case DEPOSIT: {
        DepositController controller;
        controller.run(); 
        break;
    }
    case CHECK_BALANCE: {
        CheckBalanceController controller;
        controller.run();  
        break;
    }
    case TRANSFER: {
        TransferController controller;
        controller.run();  
        break;
    }
    case LOGOUT: {
        LogoutController controller;
        controller.run();  
        break;
    }
    default:
        std::cout << "\nInvalid choice.\n";
        break;
    }
}

void MainMenuController::run() const {
    int choice = 0;
    const int logoutOption = static_cast<int>(MainMenuOptions::LOGOUT);

    MainMenuView view;

    do {
        view.render();          
        view.printMenuItems();   
        choice = InputReader::readIntegerInRange("\nSelect an option : ", 1, logoutOption);

        handleUserSelection(choice);  

        if (choice != logoutOption) 
            return;

    } while (choice != logoutOption);
}
