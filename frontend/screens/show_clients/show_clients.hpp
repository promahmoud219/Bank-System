//! show_clients.hpp

#pragma once

#include <vector>
#include "../../../backend/domains/clients/types/types.hpp"

namespace screens::show_clients {

    void show();
    void printRecords (const std::vector<clients::types::Client>& Clients);
    void printLineRecord (const clients::types::Client& client);

}