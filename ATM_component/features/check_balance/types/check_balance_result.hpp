#pragma once
#include <string>

struct CheckBalanceResult {
    bool success;
    double balance;
    std::string message;

    static CheckBalanceResult Success(double bal) {
        return { true, bal, "Balance retrieved successfully." };
    }

    static CheckBalanceResult Failure(const std::string& msg) {
        return { false, 0.0, msg };
    }
};
