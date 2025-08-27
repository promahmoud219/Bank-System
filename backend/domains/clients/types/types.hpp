//! types.hpp

#pragma once 

#include <string>

namespace clients::types {

    struct Client 
    {
        std::string account_number;
        std::string pinCode;
        std::string name;
        std::string phone;
        double account_balance = 0.0;
        bool delete_mark = false;
        bool update_mark = false;
    };

    enum class DeleteResult { Success=1, Cancelled=2, NotFound=3, Error=4 };
    enum class UpdateResult { NotFound=1, Cancelled=2, Error=3, Success=4 };
    enum class MainMenueChoice {ShowClientsList=1, AddClient=2, DeleteClient=3, UpdateClient=4, SearchClient=5, Exit=6};
    
}