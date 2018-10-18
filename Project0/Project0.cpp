// Project0.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    std::cout << "Hello World!\n"; 

	srand(time(NULL));

	int ranNum = rand() % 100;
	int numOfGuess = 0;
	int playerGuess;
	bool gameWin = false;

	//Ask player
	while (gameWin != true)
	{
		std::cout << "Guess a number between 1 and 100\n";
		std::cin >> playerGuess;
		if (playerGuess < ranNum)
		{
			std::cout << "The number is higher\n";
			std::cout << ranNum;
			gameWin = false;
		}
		else if (playerGuess > ranNum)
		{
			std::cout << "THe number is lower\n";
			std::cout << ranNum;
			gameWin = false;
		}
		else
		{
			std::cout << "Correct number guessed\n";
			std::cout << ranNum;
			gameWin = true;
		}
	}

	std::cout << "You win\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
