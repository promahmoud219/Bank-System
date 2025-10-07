#include "account.hpp"
#include <string>

int Account::getAccountID() const { 
    return accountID; 
}

int Account::getClientID() const {
    return clientID; 
}
double Account::getBalance() const {
    return balance; 
}

std::string Account::getPassword() const {
    return password; 
}

bool Account::checkPassword(const std::string& inputPass) const {
    return password == inputPass;
}

void Account::deposit(double amount) {
    balance += amount; 
}

bool Account::withdraw(double amount) {
    if (amount <= balance) {
        balance -= amount;
        return true;
    }
    return false;
}
