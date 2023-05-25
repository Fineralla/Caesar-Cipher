#pragma once
#include <string>

class Caesar {
public:
	void enterMessage();
	void perfomingAnOperation();
	void chooseOperationCoding();
	void chooseOperatingDecoding();

private:
	char operation;
	int lenght;
	std::string sentence;
};