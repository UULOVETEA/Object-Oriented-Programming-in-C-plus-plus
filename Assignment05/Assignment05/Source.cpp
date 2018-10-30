#include <iostream>
#include <iomanip>
#include <string>
#include "Header.h"
using namespace std;

// Function to get all player's information
void GetPlayerInfo(Player* person)
{
	for (int index = 0; index < SIZE; index++)
	{
		// Get player's name
		cout << "Player #" << (index + 1) << endl;
		cout << "What is the players name?" << endl;
		getline(cin, person[index].name);

		// Get player's number
		cout << "What is the player's number?" << endl;
		cin >> person[index].number;

		// Validate player's number is numeric and not negative
		while (person[index].number < 0)
		{
			cin.clear();
			cin.ignore();

			// Print out error message
			cout << "Number cannot be negative." << endl;

			// Ask user to enter player's number again
			cout << "What is the player's number?" << endl;
			cin >> person[index].number;
			
		}

		// Get player's points
		cout << "How many points did this player score?" << endl;
		cin >> person[index].points;

		// Validate player's points is numeric and not negative
		while (person[index].points < 0)
		{
			cin.clear();
			cin.ignore();

			// Print out error message
			cout << "Points cannot be negative." << endl;

			// Ask user to enter player's points again
			cout << "How many points did this player score?" << endl;
			cin >> person[index].points;				
		}

		cin.get();
		cout << endl << endl;
	}

	
}

// Funtion to show all player's information
void ShowInfo(Player* person)
{
	cout << left << setw(20) << "Name"
		 << setw(15) << "Number"
		 << setw(15) << "Points"
		 << endl
		 << "-----------------------------------------"
		 << endl;

	for (int index = 0; index < SIZE; index++)
	{
		cout << left << setw(20) << person[index].name
			 << setw(15) << person[index].number
			 << setw(15) << person[index].points
			 << endl;
	}
}

// Funtion to get the total points
int GetTotalPoints(const Player person[], int SIZE)
{
	// Initialized total to 0
	int total = 0;

	for (int index = 0; index < SIZE; index++)
	{
		total += person[index].points;
	}

	return total;
}

// Function to show the player who get the highest points
void ShowHighest(const Player person[], int SIZE)
{
	// Initialized Highest to 0
	int Highest = 0;
	// Initialized HighestName
	string HighestName = "";

	for (int index = 0; index < SIZE; index++)
	{
		if (Highest < person[index].points)
		{
			Highest = person[index].points;
			HighestName = person[index].name;
		}
			
	}

	cout << "The player who get the most points is: " << HighestName << endl;
}