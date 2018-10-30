#include "FeetInches.h"
#include "RoomCarpet.h"
#include "RoomDimension.h"
#include <iomanip>
#include <iostream>
using namespace std;

/**********************************************************************
* Program Name:   Carpet Calculator
* Author:         Xiaomeng Cao
* Date:           October 28, 2016
* Course/Section: CSC 263-001
* Program Description:
*    This program will ask the user for the dimensions of the room and
*	 the price per square foot for the carpet, and then it will calcualte
*	 and display the total cost of the carpet.
*
* Pseudocode:
*    Initial Algorithm
*    -------
*		  1. Ask the user to enter the length of room
*		  2. Ask the user to enter the width of room
*		  3. Ask the user to enter the price per square foot for the carpet
*		  4. Calculate the total cost of the carpet
*		  5. Dispaly the total cost of the carpet
*
*    Refined Algorithm
*    -------
*			1. Create an instance of RoomCarpet: room,
*			   Create an instance of RoomDimension: size,
*			   Create two instance of FeetInches: length, width,
*			   Initialized feet, inches, and cost,
*			   Initialized choice = 'N'
*			Do
*			2. Ask the user to enter the length of room
*					User enter the feet and inches
*					length.setFeet
*					length.setInches
*			3. Ask the user to enter the width of room
*					User enter the feet and inches
*					width.setFeet
*					width.setInches
*			4. Set the rooms size dimensions with user entry
*					size.setLength
*					size.setWidth
*					room.setRoom
*			4. Ask the user to enter the price per square foot for the carpet
*					User enter the price
*					room.setCost
*			5. Calculate the total cost of the carpet
*			6. Dispaly the total cost of the carpet
*			7. Ask user to try again
*			WHILE choice = Y or y
**********************************************************************/

int main()
{
	// Create an instance of RoomCarpet
	RoomCarpet room;
	//RoomDimension size;
	//FeetInches length, width; // To hold length and width
	double feet, inches, cost; // To hold feet, inches, and cost input
	char choice = 'N';

	do 
	{
		// Ask the user to enter the length of room
		cout << "Enter the room's length in feet and inches: ";
		cin >> feet >> inches;
		room.setFeet(feet);
		room.setInches(inches);

		// Ask the user to enter the width of room
		cout << "Enter the room's width in feet and inches: ";
		cin >> feet >> inches;
		width.setFeet(feet);
		width.setInches(inches);

		// Set the rooms size dimensions with user entry
		size.setLength(length);
		size.setWidth(width);
		room.setRoom(size);

		// Ask the user to enter the price per square foor fo the carpet
		cout << "Enter the cost per square foot of carpet: ";
		cin >> cost;
		room.setCost(cost);

		// Display the total cost for room
		cout << setprecision(2) << fixed << showpoint;
		cout << "\nTotal Cost: $" << room.getTotalCost() << endl << endl;

		// Ask the user to try again
		cout << "Do you want try agian? Y/N  ";
		cin >> choice;
	} while (choice == 'Y' || choice == 'y');

	return 0;
}