#include "file_loader.hpp"
#include <fstream>
#include <sstream>
#include <iostream>

std::vector<std::vector<std::string>> FileLoader::loadCSV(const std::string& filePath) {
    std::vector<std::vector<std::string>> records;
    std::ifstream file(filePath);

    if (!file.is_open()) {
        std::cerr << "[FileLoader] Could not open file: " << filePath << "\n";
        return records;
    }

    std::string line;
    while (std::getline(file, line)) {
        if (line.empty()) continue;

        std::istringstream ss(line);
        std::vector<std::string> row;
        std::string cell;

        while (ss >> cell)  // read space-separated values
            row.push_back(cell);

        records.push_back(std::move(row));
    }

    file.close();
    return records;
}
