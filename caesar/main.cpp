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
		//int lenght;
		std::string sentence;
		std::cout << "What do you want? \nc - coding, d - decoding, q - quit\n";
		std::cin >> operation;
		if (operation == 'q')
		{
			break;
			//TODO: как-то заменить на то, чтобы просто выходило из программы, а не заканчивало её действие
		}
		//std::cout << "What language do you want to in code? (ru,en)\n";
		//std::cin >> language;

		//if (language == "en")
		//{
		//	lenght = 27;
		//}
		//else if (language == "ru")
		//{
		//	lenght = 33;
		//}
		if (operation == 'c')
		{
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
		else if (operation == 'd'){
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
		else
		{
			std::cout << "Incorrent data\n";
		}



		//TODO: поместить оба case в различные файлы после того, как кодт будет работать

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

		
	}
	return 0;
}