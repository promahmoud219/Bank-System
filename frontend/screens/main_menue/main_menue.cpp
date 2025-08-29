//! main_menue.cpp

#include "../../ui/ui.hpp"

#include <iostream>


namespace screens::MainMenue {
    void showMainMenue() {
        ui::showHeader("Main Menue Screen");
        ui::showMainMenueItems();
        ui::showDoubleLine();
    }

}