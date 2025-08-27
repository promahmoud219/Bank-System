//! clients.hpp

#pragma once 


#include <string>
#include <string_view>


#include "../../../../domains/clients/types/types.hpp"


namespace clients::serialization {
    
    std::string serialize (const clients::types::Client& client, const std::string& separator);
    void deserialize(clients::types::Client& client, const std::string& line);
    clients::types::Client deserialize(const std::string& line);
    clients::types::Client deserialize(const std::string& line);
 
}


