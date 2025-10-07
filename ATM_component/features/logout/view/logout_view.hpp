#pragma once
#include "ATM_component/shared/base_view.hpp"

class LogoutView : public BaseView {

public:
    LogoutView() : BaseView("Logout") {}
    void render() override;
};
