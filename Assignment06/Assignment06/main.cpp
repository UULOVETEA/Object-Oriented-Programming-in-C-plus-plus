#include "Header.h"

/**********************************************************************
* Program Name:   File Record
* Author:         Xiaomeng Cao
* Date:           October 3, 2016
* Course/Section: CSC 263-001
* Program Description:
*    This program will display a menu, and user can add record to the file,
*	 display all reoceds in the file, and edit any record in the file.
*
* Pseudocode:
*    Initial Algorithm
*    -------
*         Print a menu
*		  1. Add new records to the file 
*		  2. Display any record in the file
*		  3. Change any record in the file
*		  4. Exit the program
*
*    Refined Algorithm
*    -------
*         Print a menu
*				Get user's choice
*		  1. Add new records to the file
*				Get item's name
*				Get item's quantity
*				Get item's whole sale cost
*				Get item's retail cost
*		  2. Display any record in the file
*				Display all records in the file
*		  3. Change any record in the file
*				Get the record number
*				Display the item
*				Get new item's name
*				Get new item's quantity
*				Get new item's whole sale cost
*				Get new item's retail cost
*		  4. Exit the program
**********************************************************************/

int main()
{
	fstream myFile;

	// Initialized choice to 0
	int choice = 0;
	
	do 
	{
		// Clear the screen
		system("CLS");

		// Displya menu
		cout << "MENU" << endl;
		cout << "1. Add new records to the file" << endl;
		cout << "2. Display any record in the file" << endl;
		cout << "3. Change any record in the file" << endl;
		cout << "4. Exit the program" << endl << endl;
		cout << "Please enter your choice: ";
		cin >> choice; // Get user's choice
		cout << endl;

		switch (choice)
		{
		case 1:
			// Clear the screen
			system("CLS");
			// Open my file
			myFile.open("fileRecord.dat", ios::app | ios::binary);
			// Call AddItem function
			AddItem(myFile);
			// CLose my file
			myFile.close();
			break;

		case 2:
			// Clear the screen
			system("CLS");
			// Open my file
			myFile.open("fileRecord.dat", ios::in | ios::binary);
			// Call DisplayItem function
			DisplayItem(myFile);
			// CLose my file
			myFile.close();
			//Pause to read output
			system("PAUSE");
			break;

		case 3:
			// Clear the screen
			system("CLS");
			// Open my file
			myFile.open("fileRecord.dat", ios::in | ios::binary);
			// Call DisplayItem function
			DisplayItem(myFile);
			// CLose my file
			myFile.close();
			// Open my file
			myFile.open("fileRecord.dat", ios::in | ios::out | ios::binary);
			// Call EditItem function
			EditItem(myFile, myFile);
			// CLose my file
			myFile.close();
			break;

		case 4:
			// Clear the screen
			system("CLS");
			// Print a message
			cout << "Program Ending..." << endl << endl;
			break;
		}

	} while (choice != 4); // IF choice = 4, end loop

	return 0;
}