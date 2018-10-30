#include <iostream>
using namespace std;

/**********************************************************************
* Program Name:   Recursion Method
* Author:         Xiaomeng Cao
* Date:           Decemember 8, 2016
* Course/Section: CSC 263-001
* Program Description:
*    This program will create three recursion method. For method 1, it
*	 will count how many even numbers in an array, and method 2 will
*	 search in the array and return true if found target or false otherwise,
*	 and method 3 will repalce the target in an array by a zero.
*
* Pseudocode:
*    Initial Algorithm
*    -------
*			1. Create an array
*			2. Create method 1 to cout how many even numbers in the array
*			3. Create method 2 to search a target in the array and retrun true if found or false otherwise
*			4. Create method 3 to replace a target in the array by a zero
*			5. Display the new array
*
*    Refined Algorithm
*    -------
*			1. Create an array
*					int myArray[] = { 5, 2, 5, 6, 3, 1 }
*			2. Create method 1 to cout how many even numbers in the array
*					LinkedList<WeatherStats> list
*			3. Create method 2 to search a target in the array and retrun true if found or false otherwise
*					IF FindTarget(myArray, size(myArray) - 1, 3) == 0
*						Print false
*					ELSE
*						Print True
*			4. Create method 3 to replace a target in the array by a zero
*					ReplaceTarget(myArray, size(myArray) - 1, 5)
*			5. Display the new array
**********************************************************************/

int NumEvens(int* myArray, int size);
bool FindTarget(int* myArray, int size, int target);
void ReplaceTarget(int* myArray, int size, int target);

int main() 
{
	// Create an integer array
	int myArray[] = { 5, 2, 5, 6, 3, 1 };

	// Recursion method 1
	cout << "Method 1:" << endl;
	// Call function NumEvens to get how many even numbers in the array
	cout << "There are " << NumEvens(myArray, size(myArray) - 1) << " even numbers in the array" << endl << endl;
	
	// Recursion method 2
	cout << "Method 2:" << endl;
	// Call fucntion FindTarget to determine the target is in the array or not
	if (FindTarget(myArray, size(myArray) - 1, 3) == 0)		// If function return 0
		cout << "False"  << endl << endl;					// Print False
	else													// Else funtion return 1
		cout << "True" << endl << endl;						// Print True

	// Resucrsion method 3
	cout << "Method 3:" << endl;
	// Call function ReplaceTarget to replace a target by zero
	ReplaceTarget(myArray, size(myArray) - 1, 5);

	// Display the array
	for (int index = 0; index < size(myArray); index++)
	{
		cout << myArray[index] << " ";
	}

	cout << endl << endl;
	return 0;
}

// Function NumEvens to count how many even numbers in the array
//***********************************************************************
// The NumEvens fucntion retrun how many even numbers are contained in	*
// an array of date.													*
// The parameter are:													*
// myArray: the array that the fucntion will search						*
// size: the size of myArray											*
// target: the value that searching for									*
//***********************************************************************
int NumEvens(int* myArray, int size)
{
	// Initialize count to 0
	int count = 0;
	
	if (size >= 0)
	{	
		// Base case
		if (myArray[size] % 2 == 0)		// If the number % 2 = 0
		{
			count++;					// count += 1
		}

		// Recursive case
		count += NumEvens(myArray, size - 1);	//	Recursive Call
	}
	return count;
}

//***********************************************************************
// The FindTarget fucntion retrun 1 if the target found in the array	*
// or return 0 if the target did not found.								*
// The parameter are:													*
// myArray: the array that the fucntion will search						*
// size: the size of myArray											*
// target: the value that searching for									*
//***********************************************************************
bool FindTarget(int* myArray, int size, int target)
{
	// Initialize result to false
	bool result = false;

	if (size >= 0)
	{
		if (myArray[size] == target)	// If found the target in the array, set resulte to true
			result = true;				// Base case
		else
			return FindTarget(myArray, size - 1, target);	// Recursive case
	}
	

	return result;
}

//***********************************************************************
// The ReplaceTarget fucntion removes all occurrences of target from	*
// an array by replacing it with a zero.								*
// The parameter are:													*
// myArray: the array that the fucntion will search						*
// size: the size of myArray											*
// target: the value that searching for									*
//***********************************************************************
void ReplaceTarget(int* myArray, int size, int target)
{
	if (size >= 0)
	{
		// Base case
		if (myArray[size] == target)	// If found a value same with the target
			myArray[size] = 0;			// Replace the value by a zero

		// Recursive case
		ReplaceTarget(myArray, size - 1, target); // Recusrive call
	}
}