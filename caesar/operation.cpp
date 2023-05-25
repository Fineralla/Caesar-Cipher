#include "operation.h"
#include <iostream>

void Caesar::enterMessage() {
	std::cout << "It's Caesar coder and decorer. Hello!\n\n";
}

void Caesar::perfomingAnOperation() {
	while (true) {
		std::cout << "What do you want? \nc - coding, d - decoding, q - quit\n";
		std::cin >> operation;
		if (operation == 'q')
		{
			exit(0);
		}

		else if (operation == 'c')
		{
			Caesar::chooseOperationCoding();
		}
		else if (operation == 'd')
		{
			Caesar::chooseOperatingDecoding();
		}
		else
		{
			std::cout << "Incorrent data\n\n";
		}
	}
}


void Caesar::chooseOperationCoding() {
	std::cout << "Enter your sentence for coding: ";
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, sentence);
	//std::cout << sentence << '\n';
	//std::cout << typeid(sentence).name() << '\n';
	std::cout << "Result is: " << '\n';

	char letter = 0;

	for (int j = 0; j < 26; j++)
	{
		int shift = 0;
		if (j >= 1)
		{
			shift = 1;
		}
		for (int i = 0; i < sentence[i] != '\0'; i++)
		{
			letter = sentence[i];
			//std::cout << letter << '\n';

			if (letter >= 'a' && letter <= 'z')
			{
				letter = letter + shift;
				//std::cout << letter << '\n';
				//loop
				if (letter > 'z')
				{
					letter = letter - 'z' + 'a' - 1;
					//std::cout << letter << '\n';
				}

				sentence[i] = letter;
				//std::cout << sentence[i] << '\n';
			}
			else if (letter >= 'A' && letter <= 'Z') {
				letter = letter + shift;
				//std::cout << letter << '\n';
				//loop
				if (letter > 'Z')
				{
					letter = letter - 'Z' + 'A' - 1;
					//std::cout << letter << '\n';
				}

				sentence[i] = letter;
				//std::cout << sentence[i] << '\n';
			}
		}
		std::cout << j << ": " << sentence << '\n';
	}
}

void Caesar::chooseOperatingDecoding()
{
	std::cout << "Enter your sentence for decoding: ";
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::getline(std::cin, sentence);
	//std::cout << sentence << '\n';
	//std::cout << typeid(sentence).name() << '\n';
	std::cout << "Result is: " << '\n';

	char letter = 0;

	for (int j = 0; j < 26; j++)
	{
		int shift = 0;
		if (j >= 1)
		{
			shift = 1;
		}
		for (int i = 0; i < sentence[i] != '\0'; i++)
		{
			letter = sentence[i];
			//std::cout << letter << '\n';

			if (letter >= 'a' && letter <= 'z')
			{
				letter = letter - shift;
				//std::cout << letter << '\n';
				//loop
				if (letter < 'a')
				{
					letter = letter + 'z' - 'a' + 1;
					//std::cout << letter << '\n';
				}
				sentence[i] = letter;
				//std::cout << sentence[i] << '\n';
			}
			else if (letter >= 'A' && letter <= 'Z') {
				letter = letter - shift;
				//std::cout << letter << '\n';
				//loop
				if (letter < 'A')
				{
					letter = letter + 'Z' - 'A' + 1;
					//std::cout << letter << '\n';
				}
				sentence[i] = letter;
				//std::cout << sentence[i] << '\n';
			}
		}
		std::cout << j << ": " << sentence << '\n';
	}
}

