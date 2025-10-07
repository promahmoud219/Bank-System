#pragma once
#include <string>
#include <stdexcept>

class Account {
private:
    std::string _clientID;
    std::string _accountID;
    std::string _pinCode;
    double _balance;

public:
    Account(const std::string& accountID,
        const std::string& clientID,
        double initialBalance,
        const std::string& pinCode)
        : _clientID(clientID),
        _accountID(accountID),
        _pinCode(pinCode),
        _balance(initialBalance) { }

    std::string getAccountID() const { return _accountID; }
    std::string getClientID() const { return _clientID; }
    double getBalance() const { return _balance; }

    bool checkPinCode(const std::string& inputPin) const {
        return _pinCode == inputPin;
    }

    void deposit(double amount) {
        if (amount <= 0)
            throw std::invalid_argument("Deposit amount must be positive.");
        _balance += amount;
    }

    bool withdraw(double amount) {
        if (amount <= 0 || amount > _balance)
            return false;
        _balance -= amount;
        return true;
    }
};
