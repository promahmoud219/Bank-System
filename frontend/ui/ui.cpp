// ui.cpp

#include "ui.hpp"
#include "../../backend/domains/clients/types/types.hpp"

#include <string>
#include <limits>
#include <iostream>
#include <iomanip>



namespace ui {
    
    void showHeader (const std::string& title)
    {
        showDoubleLine();
        std::cout << "\n\t\t\t\t" << title << "\n";
        showDoubleLine();
    }


    void showLine()
    {
        std::cout << "\n-----------------------------------------------------------";
        std::cout << "-----------------------------------------------------------\n";
    }
    
    void showTable () 
    {
        showLine();
        
        std::cout << "| " << std::left << std::setw(15) << "Account Number";
        std::cout << "| " << std::left << std::setw(10) << "Pin Code";
        std::cout << "| " << std::left << std::setw(40) << "Client Name";
        std::cout << "| " << std::left << std::setw(16) << "Phone";
        std::cout << "| " << std::left << std::setw(12) << "Balance";
        
        showLine();
    }

    void showDoubleLine ()
    {
        std::cout << "\n===========================================================";
        std::cout << "===========================================================\n";       
    }

    void showMainMenueItems()
    {
        std::cout << "\n\t\t[1]  Show Client List.";
        std::cout << "\n\t\t[2]  Add New Client.";
        std::cout << "\n\t\t[3]  Delete Client.";
        std::cout << "\n\t\t[4]  Update Client Info.";
        std::cout << "\n\t\t[5]  Find Client.";
        std::cout << "\n\t\t[6]  Exit.";
    }

    void readNewClient (clients::types::Client& client)
    {
        
        std::cout << "Enter Account Number? ";
        std::getline(std::cin >> std::ws, client.account_number);

        std::cout << "Enter PinCode? ";
        std::getline(std::cin, client.pinCode);

        std::cout << "Enter Name? ";
        std::getline(std::cin, client.name);

        std::cout << "Enter Phone? ";
        std::getline(std::cin, client.phone);

        std::cout << "Enter Account Balance? ";
        std::cin >> client.account_balance;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // flush leftover input
    }

    void printClientRecord(const clients::types::Client& client) 
    {     
        std::cout << "\n\nThe following is the extracted client record:\n";     
        std::cout << "\nAccout Number: " << client.account_number;     
        std::cout << "\nPin Code     : " << client.pinCode;     
        std::cout << "\nName         : " << client.name;     
        std::cout << "\nPhone        : " << client.phone;     
        std::cout << "\nAccount Balance: "<<client.account_balance << "\n"; 
    }
    
    
    void wait_for_enter() {
        std::cout << "\nPress ENTER to continue...";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin.get();
    }

}