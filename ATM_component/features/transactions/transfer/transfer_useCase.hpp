#pragma once
#include <string>
#include <memory>
#include "account_component/entity/account.hpp"

struct TransferResult {
    bool success;
    std::string message;
    double senderNewBalance;
    double receiverNewBalance;
    std::shared_ptr<Account> sender;
    std::shared_ptr<Account> receiver;

    static TransferResult Success(std::shared_ptr<Account> s, std::shared_ptr<Account> r) {
        return { true, "Transfer successful.", s->getBalance(), r->getBalance(), std::move(s), std::move(r) };
    }

    static TransferResult Failure(const std::string& msg) {
        return { false, msg, 0.0, 0.0, nullptr, nullptr };
    }
};
