// clients_service.cpp

#include "clients_services.hpp"
#include "../types/types.hpp"
#include "../../../database/repositories/clients/clients_repository.hpp"

namespace clients_service {
    bool save_client(const clients::types::Client& client) {
        return database::clients_repository::add(client);
    }
}
