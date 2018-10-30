#include <iostream>
#include <iomanip>
#include "InventoryItem.h"
#include "CashRegister.h"
using namespace std;

/**********************************************************************
* Program Name:   Cash Register
* Author:         Xiaomeng Cao
* Date:           October 12, 2016
* Course/Section: CSC 263-001
* Program Description:
*    This program will display a list of items, and user can choose one to purchase,
*	 then it will display the subtotal, tax, and total of the item.
*
* Pseudocode:
*    Initial Algorithm
*    -------
*		  1. Display a list of items that are available to purchase
*		  2. Ask the user which item do they want to buy
*		  3. Ask the user how many items do they want
*		  4. Update InventoryItem
*		  5. Get the value of subtotal, tax, and total
*		  6. Dispaly the subtotal, tax, and total
*
*    Refined Algorithm
*    -------
*			1. Initialized inventory to 5 items, and add description, cost, and units
*			Do
*			2. Display a list of items that are available to purchase
*			3. Ask the user which item do they want to buy
*					WHILE the inventory of item that user choose is equal to 0
*						Print error message
*						Ask user to choose another item
*					END WHILE
*			4. Ask the user how many items do they want
*					WHILE qtySelected < 0
*						Print error message
*						Ask user to enter a positive number
*					END WHILE
*					WHILE the inventory of item smaller than qtySelected
*						Print error message
*						Ask user to enter again
*					END WHILE
*			5. Update InventoryItem
*			6. Get the value of subtotal, tax, and total
*			7. Dispaly the subtotal, tax, and total
*			8. Ask user to purchase another one or not
*			WHILE choice = Y or y
**********************************************************************/

// The function to display all item in the InventoryItem
void DisplayItem(InventoryItem* const e)
{
   for(int index = 0; index < 5; index++)
   {
	   cout << setw(5) << index + 1
		   << setw(20) << e[index].getDescription()
		   << setw(20) << e[index].getUnits() << endl;
   }
}

int main()
{
	char choice = 'N';
	int numSelected; // Entered by user
	int qtySelected; // Entered by user
	double subTotal; // Local variable for subTotal
	double tax; // Local variable for tax
	double total; // Local variable for total

	InventoryItem inventory[5] = { InventoryItem("Adjustable Wrench", 3.49, 10),
								   InventoryItem("Screwdriver", 5.99, 20),
								   InventoryItem("Pliers", 2.69, 35),
								   InventoryItem("Ratchet", 3.99, 10),
								   InventoryItem("Socket Wrench", 2.49, 7) };

	do
	{
		cout << left << setw(5) << "#" << setw(20) << "Item" << setw(20) << "qty on Hand" << endl;
		cout << "-------------------------------------------------------" << endl;

		// Display the inventory item
		DisplayItem(inventory);

		// Ask the user which item do they want to buy
		cout << endl << "Which item above is beging purchased?" << endl;
		cin >> numSelected;

		// Validate the user's input is on the list
		while ((numSelected - 1) < 0 || (numSelected - 1) > 4)
		{
			cout << "Invalid entry, please enter the valid number of goods: ";
			cin >> numSelected;
		}


		// Validate the item is not out of stock
		while (inventory[numSelected - 1].getUnits() == 0)
		{
			cout << "Sorry, this item is out of stock." << endl;
			cout << "Please choose another item: ";
			cin >> numSelected;
		}

		// Ask the user how many items do they want
		cout << "How many units?" << endl;
		cin >> qtySelected;

		// Validate the qtySelected is not a negative value
		while (qtySelected < 0)
		{
			cout << "Error. Cannot enter negetive number" << endl;
			cout << "Please enter again: ";
			cin >> qtySelected;
		}

		// Validate the inventory of item is not being a negative value
		while (inventory[numSelected - 1].getUnits() < qtySelected)
		{
			cout << "Sorry. We do not have enough items." << endl;
			cout << "Please enter again: ";
			cin >> qtySelected;
		}

		// Update InventoryItem
		inventory[numSelected - 1].setUnits(inventory[numSelected - 1].getUnits() - qtySelected);

		// Define an instance of the CashRegister class
		CashRegister Sale = CashRegister(inventory[numSelected - 1], qtySelected);

		cout << endl;
		// Get subtotal, tax, and total
		subTotal = Sale.GetSubtotal();
		tax = Sale.GetTax();
		total = Sale.GetTotal();

		// Display subtotal, tax, and total
		cout << fixed << showpoint << setprecision(2);
		cout << "Subtotal: $ " << subTotal << endl;
		cout << "Tax: $ " << tax << endl;;
		cout << "Total: $ " << total << endl << endl;		

		// Ask user to run again or not
		cout << "Do you want to purchase another item? (Y/N)  ";
		cin >> choice;
		cout << endl;
		
	} while (choice == 'Y' || choice == 'y');
	
	cout << endl;

	return 0;
}