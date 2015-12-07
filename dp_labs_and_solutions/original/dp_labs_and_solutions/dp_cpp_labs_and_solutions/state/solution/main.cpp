// main.cpp

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "game.h"

int main()
{
	// seed the random number generator:
	srand((unsigned) time(nullptr));

	while (true)
	{
		game a_game;

		a_game.play();

		std::cout << "Enter 'y' to play again: ";
		char c;
		std::cin >> c;
		if (c != 'y')
		{
			break;
		}
	}

	return 0;
}
