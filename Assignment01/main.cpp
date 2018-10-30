#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	int userChoice;		// To hold the user's choice
	int computerChoice;	// To hold the computer's choice
	char again = 'N';

	do
	{
		// Get the user's choice.
		userChoice = GetUserChoice();
		
		// Get the computer's choice.
		computerChoice = GetComputerChoice();
		
		// Print a line
		cout << "________________________________" << endl;

		// Display Choices
		cout << "You selected: ";
		DisplayChoice(userChoice);
		cout << endl;
		cout << "The computer selected: ";
		DisplayChoice(computerChoice);
		cout << endl;

		// Determine the winner.
		DetermineWinner(userChoice, computerChoice);

		// Ask user to play again
		cout << "Do you want to play again? (Y/N) ---> ";
		cin >> again;
		
		// Validate the choice
		while (again != 'Y' && again != 'y' && again != 'N' && again != 'n')
		{
			cout << "Invalid entry. Please enter Y or N ---> ";
			cin >> again;
		}
	} while (again == 'Y' || again == 'y');
	
	return 0;
}
