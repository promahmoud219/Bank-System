#pragma once
#include <unordered_map>
#include "ATM_component/shared/command/ICommand.hpp"

class MainMenuController {
	static const std::unordered_map<int, std::shared_ptr<ICommand>> commands;
	int getChoice() const;
	void renderView() const;
	void handleUserSelection(int choice) const;
public:
	void run() const;
};	