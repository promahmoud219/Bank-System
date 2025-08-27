//! clients.cpp

#include "clients.hpp"

#include "../../../../domains/clients/types/types.hpp"
#include "../../../../libcore/mystring/mystring.hpp"

#include <string>
#include <sstream>
#include <vector>
#include <string_view>





namespace clients::serialization {

    
    std::string serialize (const clients::types::Client& client, const std::string& separator)
    {
        
        std::ostringstream oss;
        
        oss << client.account_number << separator 
            << client.pinCode << separator 
            << client.name << separator 
            << client.phone << separator 
            << client.account_balance;

        return oss.str();
    }
 

    void deserialize(clients::types::Client& client, const std::string& line)
    {
        std::vector<std::string> vClientData = libcore::mystring::SplitString(line, "#//#");

        client.account_number   = vClientData[0];
        client.pinCode         = vClientData[1];
        client.name            = vClientData[2];
        client.phone           = vClientData[3];
        client.account_balance  = std::stod(vClientData[4]);
    }

    clients::types::Client deserialize(const std::string& line)
    {  
        clients::types::Client client;
        deserialize(client, line);  //* ✅ reuse the other overload
        return client;
    }

}
