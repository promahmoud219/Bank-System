#include <iostream>
#include "quick_withdraw_view.hpp"

#include "../../../Ui_Utils/ui_utils.hpp"
#include "../../../../core_library/input_validation/input_validation.hpp"

void QuickWithdrawView::displayOptions() const {
	std::cout << "[1] 100\t\t[2] 200\n";
	std::cout << "[3] 400\t\t[4] 800\n";
	std::cout << "[5] 1000\t[6] 1200\n";
	std::cout << "[7] Exit\n";
};

void QuickWithdrawView::render() {
	clear();
	printHeader();
	displayOptions();
	UiUtils::printLine(); 
	promptForSelection();
		
}

void QuickWithdrawView::promptForSelection() {
	int last_item = 7;
	int choice;
	do
	{
		choice = InputValidation::readIntegerInRange("\nSelect an option : ", 1, last_item);
		if (choice != last_item) {
			
			UiUtils::pressEnterToContinue();
			return;
		}  
	} while (choice != last_item);
}
