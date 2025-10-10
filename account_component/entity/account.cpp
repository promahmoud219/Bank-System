#include "account.hpp"
#include <string>

std::string Account::getAccountID() const { 
    return _accountID; 
}

std::string Account::getClientID() const {
    return _clientID; 
}
double Account::getBalance() const {
    return _balance; 
}

bool Account::checkPinCode(const std::string& inputPass) const {
    return _pinCode == inputPass;
}

void Account::deposit(double amount) {
    if (amount <= 0)
        throw std::invalid_argument("Deposit amount must be positive.");
    _balance += amount;
}

bool Account::withdraw(double amount) {
    if (amount <= 0 || amount > _balance)
        return false;
    _balance -= amount;
    return true;
}
