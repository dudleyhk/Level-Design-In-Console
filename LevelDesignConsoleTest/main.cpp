/*



*/




#include <iostream>
#include <Windows.h>


#include "JumpRule.h"


int main()
{
	unsigned short length = 0;
	unsigned short difficulty = 0;
	std::string    level_str = "";

	JumpRule* jumpRule = new JumpRule();
	jumpRule->init();



	while (true)
	{
		std::cout << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
		std::cout << "Select a difficulty (1 - 3) where 1 is easy. " << std::endl;

		std::cout << "Difficulty: ";
		std::cin >> difficulty;

		switch (difficulty)
		{
			case 1:
				level_str = jumpRule->createEasy();
				break;

			case 2:
				level_str = jumpRule->createMedium();
				break;

			case 3:
				level_str = jumpRule->createHard();
				break;

			default:
				std::cout << "Number Invalid. Try again." << std::endl;
				std::cout << std::endl;
				continue;
				break;
		}

		std::cout << "----------------------------" << std::endl;
		std::cout << "New Level: " << level_str << std::endl;
		std::cout << "Level Length: " << level_str.size() << std::endl;
		std::cout << "----------------------------" << std::endl;
		std::cout << std::endl;

		system("PAUSE");
	}

	if (jumpRule)
	{
		delete jumpRule;
		jumpRule = nullptr;
	}

	return 0;
}