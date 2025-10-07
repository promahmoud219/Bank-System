#pragma once
#include "ATM_Component/features/login/view/login_view.hpp"

class ATMGateway {
public:
    void start() {
        showLogin();
    }

private:
    void showLogin() {
        LoginView loginView;
        loginView.render();
    }
};
