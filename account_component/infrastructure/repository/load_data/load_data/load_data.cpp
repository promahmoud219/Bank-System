#include "load_data.hpp"
#include "account_component/infrastructure/repository/load_data/file_loader/file_loader.hpp"
#include "account_component/infrastructure/repository/load_data/data_mapper/data_mapper.hpp"

std::vector<std::shared_ptr<Account>> LoadData::fromCSV(const std::string& filePath) {
    auto rawData = FileLoader::loadCSV(filePath);
    return DataMapper::mapToAccounts(rawData);
}
