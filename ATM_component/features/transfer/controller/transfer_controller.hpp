#pragma once
#include <string>

class TransferController {
public:
    void handleTransfer(const std::string& receiverID, double amount);
};