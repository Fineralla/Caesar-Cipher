#include <iostream>
#include <typeinfo>
#include <string>
#include <vector>
#include <stdlib.h>

//int argc, char* argv[]
//* argv[1] == 'd'

int main() {
	
	while (true)
	{
		char operation;
		std::string sentence;
		std::cout << "What do you want? \nc - coding, d - decoding, q - quit\n";
		std::cin >> operation;
		if (operation == 'q')
		{
			break;
		}
		switch (operation)
		{
		case 'd':
			std::cout << "Enter your sentence for decoding: ";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::getline(std::cin, sentence);
			std::cout << sentence;
			std::cout << typeid(sentence).name();
			break;
		default:
			break;
		}

	}
		//логика декодирования
		
		//std::vector<std::string> sentence;
		
		
		//for (std::string elem : sentence) {
		//	std::cout << elem << " ";
		//}
		//std::cout << "\n";
		//return 0;
		//decoding(sentence);
	
	//else if (*argv[1] == 'c')
	//{
		//логика кодирования
		//std::cout << "Enter your sentence for decoding: ";
		//std::vector<std::string> sentence;
	//}
	
	return 0;
}