//! clients_repository.hpp

#pragma once

#include <vector>
#include <string>

#include "../../../domains/clients/types/types.hpp"


namespace database::clients_repository {

    std::vector<clients::types::Client> load_all(const std::string& file_name);   
    // bool save_all(const std::string& file_name, const std::vector<clients::types::Client>& clients);
    // bool add(const std::string& file_name, const clients::types::Client& client);
    // bool remove(const std::string& file_name, const std::string& account_number);
    // bool update(const std::string& file_name, const clients::types::Client& updated_client);
}

