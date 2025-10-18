#pragma once
#include <string>

class InputUtils {
public:
	static bool confirm(const std::string& prompt);
	static int readInteger(const std::string & message);
	static int readIntegerInRange(const std::string & message, int min, int max);
	static double readAmount(const std::string & prompt);
	static std::string readString(const std::string& prompt);
};