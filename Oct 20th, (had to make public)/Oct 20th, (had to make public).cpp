#include <iostream>

//using namespace std;

int main()
{
	while (true)
	{
		//int a = 123; //demonstrating indentation 
		//prompt 
		std::cout << "Enter a shape type (only rectangle, circle, and cylinder are handled here):" << std::endl;

		std::string shape; //concise variable name (verbose would be theShapesName) 
		std::cin >> shape; //getline can be used here instead

		if (shape == "rectangle" || shape == "Rectangle")
		{
			float length; //variable declaration 
			float width = 0.0f; //variable initialization

			std::cout << "Enter the length AND the width" << std::endl;
			std::cin >> length >> width;

			float area = length * width;

			std::cout << "The area is: " << area << std::endl;
		}

		else if (shape == "circle")
		{
			float radius = 0.0f;

			//float area = ...
			std::cout << "The area is: " << 3.14 * radius * radius << std::endl;

		}

		else if (shape == "cylinder")
		{
			float radius = 0.0f;
			std::cout << "The volume of the cylinder is BLAH" << std::endl;
		}

		else
		{
			std::cout << "Unrecognized shape - try again?" << std::endl;
		}

		//radius = 132; //not in scope! this will throw an error!

	}


}
#include <iostream>
#include<Windows.h>
#include<vector> //if student wants to keep track of ALL chars entered

int main()
{
	//Part 1:
	std::cout << "Enter a character ('a', '$', etc.):" << std::endl;

	char userInput;

	//std::vector<char> allCharacters; 

	std::cin >> userInput;
	//allCharacters.push_back(userInput); 

	int numberOfCharacters = 1;
	while (userInput != 'q') //anybody?
	{
		//"body" of the loop:
		std::cout << "Enter ANOTHER character (q to quit):" << std::endl;
		std::cin >> userInput;
		numberOfCharacters++; //adds one (1) to the number of characters
	} //end while 

	std::cout << "You entered this many characters total: "
		<< numberOfCharacters << std::endl;

	std::cout << "The final character you entered was: "
		<< userInput << std::endl;

	//Part 2: 
	//std::cout << "abcdefghi"

	for (char currentLetter = 'a'; currentLetter <= 'z'; currentLetter++)
	{
		std::cout << currentLetter << std::endl;
	}

	//SetConsoleOutputCP(CP_UTF8);

	////SetConsoleOutpCP(); //
	//for (int i = 0; i <= 11'125; ++i) //125 corresponds to the close brace } symbol
	//{
	//	std::cout << (char)i << " "; //"typecasting" (think Arnold Schwarzenegger)
	//}



	//std::cout << "a" << std::endl; 
	//std::cout << "b" << std::endl;
	//std::cout << "c" << std::endl;

	//for (piece1; piece2; piece3)

}//end main 