#pragma once
#include "ATM_component/shared/base_view.hpp"
#include "ATM_component/session/session_manager.hpp"

class LogoutView : public BaseView {
public:
    LogoutView() : BaseView("Logout") {}
    void render() override;
};
