#pragma once
#include "account_component/entity/account.hpp"
#include <string>

enum class LoginResultCode {
    SUCCESS,
    ACCOUNT_NOT_FOUND,
    INVALID_PIN
};

struct LoginResult {
    bool success;
    LoginResultCode code;
    Account* account = nullptr;

    static LoginResult Success(Account* acc) {
        return { true, LoginResultCode::SUCCESS, acc };
    }

    static LoginResult Failure(LoginResultCode code) {
        return { false, code, nullptr };
    }

    // ? helper function to get human-readable message (optional)
    std::string getMessage() const {
        switch (code) {
        case LoginResultCode::SUCCESS: return "? Login successful.";
        case LoginResultCode::ACCOUNT_NOT_FOUND: return "? Account not found.";
        case LoginResultCode::INVALID_PIN: return "? Incorrect PIN.";
        default: return "? Unknown error.";
        }
    }
};
