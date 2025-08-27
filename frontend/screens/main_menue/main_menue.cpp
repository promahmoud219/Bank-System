//! main_menue.cpp

#include "../../ui/ui.hpp"

#include <iostream>


namespace screens::MainMenue {
    void showMainMenue() {
        ui::showDoubleLine();
        ui::showHeader("Main Menue Screen");
        ui::showDoubleLine();
        ui::showMainMenueItems();
        ui::showDoubleLine();
    }

}