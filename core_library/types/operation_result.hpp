#pragma once
#include <string>

struct OperationResult {
    bool success;            
    std::string message;     
    double newBalance = 0.0; 

    static OperationResult Success(const std::string& msg, double balance = 0.0) {
        return { true, msg, balance };
    }

    static OperationResult Failure(const std::string& msg) {
        return { false, msg, 0.0 };
    }
};
