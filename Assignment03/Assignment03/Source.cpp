#include <iostream>
#include <iomanip>
#include "Header.h"

using namespace std;

// Function to hold all scores in an array
void GetGrades(double* scores, int size)
{
	for (int index = 0; index < size; index++)
	{
		cout << "Please enter score #" << index + 1 << ": ";
		cin >> *(scores + index);

		// if user enter number is a negative number, display error message and keep prompting the user for a new grade
		while (scores[index] < 0)
		{
			cout << "Invalid entry." << endl;
			cout << "Please enter positive number." << endl;
			cout << "Please enter score #" << index + 1 << ": ";
			cin >> *(scores + index);
		}
	}
}

// Function to calculate the average of all scores
double Average(double* scores, int size)
{
	double average = 0; // Initialize average to 0
	double total = 0; // Initialize total to 0

	for (int index = 0; index < size; index++)
	{
		total = total + *(scores + index); // Get total grade	
	}

	cout << fixed << showpoint << setprecision(2); // Format as fixed point notation showing 2 decimal places
	average = total / size;

	return average;
}

// Function to display all scores
void DisplayGrades(double* scores, int size)
{
	for (int index = 0; index < size; index++)
	{
		cout << fixed << showpoint << setprecision(2); // Format as fixed point notation showing 2 decimal places
		cout << endl << *(scores + index);
	}
}