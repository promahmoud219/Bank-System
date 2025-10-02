#pragma once
#include <string>

class InputValidation {
public:
	static int ReadPositiveNumber(const std::string& prompt);
	static std::string ReadString(const std::string& prompt);
	static char ReadYesNo(const std::string& message);
	static int ReadNumberInRange(const std::string& message, int min, int max);
	static int ReadNumber(const std::string& message);
	static bool AskYesNo(const std::string& prompt);
};


