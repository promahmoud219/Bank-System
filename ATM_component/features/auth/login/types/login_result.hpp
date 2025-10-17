#pragma once
#include <memory>
#include <string>
#include "account_component/entity/account.hpp"

enum class LoginResultCode {
    SUCCESS,
    ACCOUNT_NOT_FOUND,
    INVALID_PIN
};

struct LoginResult {
    bool success = false;
    LoginResultCode code = LoginResultCode::ACCOUNT_NOT_FOUND;
    std::shared_ptr<Account> account = nullptr;

    static LoginResult Success(std::shared_ptr<Account> acc) {
        return { true, LoginResultCode::SUCCESS, std::move(acc) };
    }
    static LoginResult Failure(LoginResultCode c) {
        return { false, c, nullptr };
    }

    std::string getMessage() const {
        switch (code) {
        case LoginResultCode::SUCCESS: return "Login successful.";
        case LoginResultCode::ACCOUNT_NOT_FOUND: return "Account not found.";
        case LoginResultCode::INVALID_PIN: return "Incorrect PIN.";
        default: return "Unknown error.";
        }
    }
};