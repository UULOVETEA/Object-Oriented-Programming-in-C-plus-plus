#include <iostream>
#include "Header.h"
using namespace std;

int main()
{
	Player person[SIZE];

	// Call GetPlayerInfo function
	GetPlayerInfo(person);

	// Display player's information
	ShowInfo(person);

	// Display the total scores
	cout << "Total Scores: " << GetTotalPoints(person, SIZE) << endl;

	// Display the player who get highest scores
	ShowHighest(person, SIZE);

	return 0;
}