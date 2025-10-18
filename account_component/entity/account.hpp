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

    std::string getAccountID() const;  
    std::string getClientID() const; 
    double getBalance() const;
    
    std::string getClientFirstName() const;
    std::string getClientFullName() const;

    bool checkPinCode(const std::string& inputPin) const;
    
    void deposit(double amount);
    bool withdraw(double amount);
};
