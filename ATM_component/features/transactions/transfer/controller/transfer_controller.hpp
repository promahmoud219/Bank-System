#pragma once
#include <string>

class TransferController {
public:
    void run(const std::string& receiverID, double amount);
};