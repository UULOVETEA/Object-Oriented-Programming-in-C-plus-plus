#include <iostream>
#include <string>
#include "TestScores.h"
#include "TooLargeScore.h"
using namespace std;

/**********************************************************************
* Program Name:   Test Scores
* Author:         Xiaomeng Cao
* Date:           November 10	, 2016
* Course/Section: CSC 263-001
* Program Description:
*    This program will have a class called TestScores which is a template class,
*	 and it will get average of the array. If scores out of range, it will throw
*	 an error message.
*
* Pseudocode:
*    Initial Algorithm
*    -------
*			1. Create four arrays
*			2. Create two instance of TestScores
*			3. Call Testing function to display the average of the array or error message
*
*    Refined Algorithm
*    -------
*			1. Create four arrays
*					double myDoubleList1[] = { 199.9, 90.56, 1.43, 4.56, 5.79 }
*					double myDoubleList2[] = { 99.9, 90.56, 1.43, 4.56, 5.79 }
*					int myIntList1[] = { -100, 45, 76, 17, 39 }
*					int myIntList2[] = { 100, 45, 76, 17, 39 }
*			2. Create two instance of TestScore
*					TestScores<double> DoubleTest
*					TestScores<int> IntTest
*			3. Call Testing function to display the average of the array or error message
*					DoubleTest.Testing() and IntTest.Testing()
**********************************************************************/

int main()
{
	// Create four array for double and integer
	double myDoubleList1[] = { 199.9, 90.56, 1.43, 4.56, 5.79 };
	double myDoubleList2[] = { 99.9, 90.56, 1.43, 4.56, 5.79 };

	int myIntList1[] = { -100, 45, 76, 17, 39 };
	int myIntList2[] = { 100, 45, 76, 17, 39 };

	// Create two instance of TestScores
	TestScores<double> DoubleTest;
	TestScores<int> IntTest;

	// Call Testing function to display the average of the array or error message
	cout << "Double scores test 1: " << endl;  
	DoubleTest.Testing(myDoubleList1);
	cout << endl;

	cout << "Double scores test 2: " << endl;
	DoubleTest.Testing(myDoubleList2);
	cout << endl;

	cout << "Integer scores test 1: " << endl;
	IntTest.Testing(myIntList1);
	cout << endl;

	cout << "Integer scores test 2: " << endl;
	IntTest.Testing(myIntList2);
	cout << endl;

	return 0;
}