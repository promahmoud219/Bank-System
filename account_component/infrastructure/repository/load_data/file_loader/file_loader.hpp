#pragma once
#include <string>
#include <vector>

class FileLoader {
public:
    static std::vector<std::vector<std::string>> loadCSV(const std::string& filePath);
};
