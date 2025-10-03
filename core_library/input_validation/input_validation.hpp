#pragma once
#include <string>

class InputValidation {
public:
	static int readPositiveInteger(const std::string& prompt);
	static std::string readString(const std::string& prompt);
	static char readYesNo(const std::string& message);
	static int readIntegerInRange(const std::string& message, int min, int max);
	static int readInteger(const std::string& message);
	static bool askYesNo(const std::string& prompt);
};
