//! clients_repository.hpp

#pragma once

#include <vector>
#include <string>
#include <string_view>

#include "../../../domains/clients/types/types.hpp"


namespace database::clients_repository {

    std::vector<clients::types::Client> load_all();   
    // bool save_all(const std::string& file_name, const std::vector<clients::types::Client>& clients);
    bool add(const clients::types::Client& client);
    // bool remove(const std::string& file_name, const std::string& account_number);
    // bool update(const std::string& file_name, const clients::types::Client& updated_client);
}

