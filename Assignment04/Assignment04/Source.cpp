#include <iostream>
#include <cctype>
#include <string>
#include "Header.h"

using namespace std;

// Function to search a input in an array
void SearchArray(string userSearch, string list[])
{
	bool result = false; // Initialize result to false

	for (int index = 0; index < SIZE; index++)
	{
		if (list[index].find(userSearch) != -1) // If find the input in the array
		{
			cout << list[index] << endl; // Display the reuslt
			result = true;
		}
	}

	// If result equal to false, display a message
	if (!result)
		cout << "No matches found." << endl;
}