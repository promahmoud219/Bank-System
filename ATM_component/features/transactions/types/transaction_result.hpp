#pragma once
#include <string>

struct TransactionResult {
    bool success;
    std::string message;
    std::string transactionType; // أو enum TransactionType لو حابب تكون قوية أكثر
    double oldBalance = 0.0;
    double newBalance = 0.0;

    static TransactionResult Success(const std::string& msg, const std::string& type, double oldBal, double newBal) {
        return { true, msg, type, oldBal, newBal };
    }

    static TransactionResult Failure(const std::string& msg, const std::string& type = "") {
        return { false, msg, type, 0.0, 0.0 };
    }
};
