#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Header.h"

using namespace std;

// Function for get user choice
int GetUserChoice()
{
	int choice; // To hold menu choice
	
	// Display the game menu
	cout << "1. Rock" << endl
	     << "2. Paper" << endl
		 << "3. Scissors" << endl
		 << "Please enter a number: ";
	cin >> choice;
	
	// Validate the choice.
	while (choice < 1 || choice > 3)
	{
		cout << "Invalid Entry. Please enter 1, 2, or 3 ---> " << endl;
		cin >> choice;
	}
	
	// Return the user choice
	return choice;
}

// Function for get computer choice
int GetComputerChoice()
{
	int number; // To hold the computer choice
	
	// number generator.
	srand(time(0));

	// Generate a random number in the range of 1-3.
	number = 1+(rand() % 3);
	
	// Return the random value.
	return number;
}

// Function for determine who is the winner
bool DetermineWinner(int userChoice, int computerChoice)
{
	if (userChoice == computerChoice)
	{
		//return false;
		cout << "Tie!" << endl;
	}
	else if (userChoice == 1)
	{
		if (computerChoice == 2)
		{
			//return false;
			cout << "Computer Win! Paper covers Rock." << endl;
		}
		else if (computerChoice == 3)
		{
			//return true;
			cout << "You Win! Rock crushes Scissors." << endl;
		}
		
	}
	else if (userChoice == 2)
	{
		if (computerChoice == 1)
		{
			//return true;
			cout << "You Win! Paper covers Rock." << endl;
		}
		else if (computerChoice == 3)
		{
			//return false;
			cout << "Computer Win! Scissors cut Paper." << endl;
		}
	}
	else if (userChoice == 3)
	{
		if (computerChoice == 1)
		{
			//return false;
			cout << "Computer Win! Rock crushes Scissors." << endl;
		}
		else if (computerChoice == 2)
		{
			//return true;
			cout << "You Win! Scissors cut Paper." << endl;
		}
	}
}

// Function for display the choice of user and computer
void DisplayChoice(int choice)
{
	if (choice == ROCK)
		cout << "Rock.";
	else if (choice == PAPER)
		cout << "Paper.";
	else if (choice == SCISSORS)
		cout << "Scissors.";
}
