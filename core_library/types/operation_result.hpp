#pragma once
#include <string>

struct OperationResult {
    bool success;            
    std::string message;     

    static OperationResult Success(const std::string& msg) {
        return { true, msg};
    }

    static OperationResult Failure(const std::string& msg) {
        return { false, msg};
    }
};

    
