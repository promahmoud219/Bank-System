#pragma once
#include "ATM_Component/features/auth/login/controller/login_controller.hpp"
#include "ATM_component/shared/repository_provider/repository_provider.hpp"

class ATMGateway {
public:
    void start() {
        RepositoryProvider::getAccountRepo();        
        showLogin();
    }

private:
    void showLogin() {
		LoginController loginController;
		loginController.run();
    }
};
