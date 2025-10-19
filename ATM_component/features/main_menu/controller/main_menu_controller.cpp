#include "main_menu_controller.hpp"
#include "ATM_component/features/main_menu/view/main_menu_view.hpp"
#include "ATM_component/features/main_menu/types/main_menu_options.hpp"

#include "ATM_component/features/transactions/quick_withdraw/controller/quick_withdraw_controller.hpp"
#include "ATM_component/features/transactions/withdraw/controller/withdraw_controller.hpp"
#include "ATM_component/features/transactions/transfer/controller/transfer_controller.hpp"
#include "ATM_component/features/transactions/deposit/controller/deposit_controller.hpp"

#include "ATM_component/features/auth/logout/controller/logout_controller.hpp"
#include "ATM_component/features/check_balance/controller/check_balance_controller.hpp"

#include "ATM_component/shared/command/quick_withdraw_command.hpp"
#include "ATM_component/shared/command/withdraw_command.hpp"
#include "ATM_component/shared/command/deposit_command.hpp"
#include "ATM_component/shared/command/check_balance_command.hpp"
#include "ATM_component/shared/command/transfer_command.hpp"
#include "ATM_component/shared/command/logout_command.hpp"

#include <iostream>
#include <memory>
#include <unordered_map>

const std::unordered_map<int, std::shared_ptr<ICommand>> MainMenuController::commands = {
    {static_cast<int>(MainMenuOptions::QUICK_WITHDRAW), std::make_shared<QuickWithdrawCommand>()},
    {static_cast<int>(MainMenuOptions::WITHDRAW), std::make_shared<WithdrawCommand>()},
    {static_cast<int>(MainMenuOptions::DEPOSIT), std::make_shared<DepositCommand>()},
    {static_cast<int>(MainMenuOptions::TRANSFER), std::make_shared<TransferCommand>()},
    {static_cast<int>(MainMenuOptions::CHECK_BALANCE), std::make_shared<CheckBalanceCommand>()},
    {static_cast<int>(MainMenuOptions::LOGOUT), std::make_shared<LogoutCommand>()},
};

void MainMenuController::run() const {
#ifdef DEBUG
    std::cout << "\n[DEBUG] MainMenuController::run().\n";
    std::cin.get();
#endif

    int choice = 0;
    const int logoutOption = static_cast<int>(MainMenuOptions::LOGOUT);
    MainMenuView view;

    do {
        renderView();
        choice = view.getChoice();
        handleUserSelection(choice);
    } while (choice != logoutOption);
}

void MainMenuController::handleUserSelection(int choice) const {
    #ifdef DEBUG
    std::cout << "\n[DEBUG] MainMenuController::handleUserSelection().\n";
    std::cin.get();
    #endif

    auto it = commands.find(choice);
    if (it != commands.end())
        it->second->execute();
    else
        std::cout << "invalid choice.\n";
}

void MainMenuController::renderView() const {
#ifdef DEBUG
    std::cout << "\n[DEBUG] MainMenuController::renderView().\n";
    std::cin.get();
#endif

    MainMenuView view;
    view.render();
    view.printMenuItems();
}