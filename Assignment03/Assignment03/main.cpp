#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	// Initialize size to 0
	int size;
	double* scores;

	// Prompt user to enter a  the number of scores that they wants to enter
	cout << "How many scores do you want to enter: ";
	cin >> size;

	// if user enter number is a negative number, display error message and keep prompting the user for a new number
	while (size < 0)
	{
		cout << "Invalid entry." << endl;
		cout << "Please enter positive number." << endl;
		cout << "How many scores do you want to enter: ";
		cin >> size;
	}

	// Define socres
	scores = new double[size];

	// Get scores from user
	GetGrades(scores, size);

	// Print a blank line
	cout << endl;

	// Display all scores
	cout << "Scores";
	DisplayGrades(scores, size);

	// Print a blank line
	cout << endl;
	
	// Display the average of all scores
	cout << "Average Score " << Average(scores, size);

	// Print two blank line
	cout << endl << endl;

	system("pause");
	return 0;
}