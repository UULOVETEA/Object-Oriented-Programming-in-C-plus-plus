#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	string Division[4] = {"North", "South", "East", "West"}; // array to hold the names for the divisions
	double Numbers[ROWS][COLS] = { 0 }; // array to hold sale numbers
	double highest, lowest;
	int row, col;
		
	// ask user to enter input
	for (int index = 0; index < ROWS - 1; index++)
	{
		cout << "Please enter the 4 quarter sales amounts for the " << Division[index] << " Division." << endl;
	
		for (int counter = 0; counter < COLS - 1; counter++)
		{
			cout << "Please enter the amounts of quarter " << counter + 1 << ": ";
			cin >> Numbers[index][counter];
		}
		
		cout << endl;
	}

	// get row total from GetRowTotal function
	for (int index = 0; index < ROWS - 1; index++)
		Numbers[index][COLS - 1] = GetRowTotal(Numbers, index);
	
	// get column total from GetColumnTotal function
	for (int counter = 0; counter < COLS; counter++)
		Numbers[COLS - 1][counter] = GetColumnTotal(Numbers, counter);
		
	cout << endl;
	cout << "\tQuarter 1\tQuarter 2\tQuarter 3\tQuarter 4\tDivision\n\t\t\t\t\t\t\t\t\tTotal\n"; // display the row table for quarter
	cout << endl;
		
	for (int index = 0; index < ROWS; index++)
	{
		cout << endl;
		
		if (index == (ROWS - 1))
		{
			cout << "Quarter" << endl << "Total" << "\t"; // display Quarter Total
		}
		else
		{
			cout << Division[index] << "\t"; // display the column table for division
		}
			
		for (int counter = 0; counter < COLS; counter++)
		{
			//cout << "   \t";
			cout << "$" << Numbers[index][counter]; // display all the numbers that user entered and the totals of those number
			cout << "\t\t";
		}
		
		cout << endl;
	}
	
	cout << endl;
	cout << endl;
	cout << "Average of all sales: " << GetAverage(Numbers) << endl << endl; // display the average of all values
		
	highest = GetHighest(Numbers, row, col); // get the highest number from GetHighest function
	cout << "Highest sale in the division " << Division[row] << " and quarter " << col + 1 << " $" << highest << endl; // display the highest number
		
	lowest = GetLowest(Numbers, row, col); // get the lowest number from GetLowest function
	cout << "Lowest sale in the division " << Division[row] << " and quarter " << col + 1 << " $" << lowest << endl; // display the lowest number
	
	return 0;
}

