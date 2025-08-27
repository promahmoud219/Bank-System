// ui.hpp

#pragma once

#include <string>
#include "../../backend/domains/clients/types/types.hpp"

namespace ui {
    
    void showHeader (const std::string& title);
    void showLine();
    void showTable ();
    void showDoubleLine ();
    void showMainMenueItems();
    void readNewClient(clients::types::Client& client);     
    void printClientRecord(const clients::types::Client& client);

}