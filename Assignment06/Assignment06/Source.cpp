#include "Header.h"

// Funtion to add item to the file
void AddItem(fstream& output)
{
	char choice = 'N';
	Inventory item;

	if (output)
	{
		do
		{
			// Get the recod
			cin.ignore();
			cout << "Enter the item name: ";
			cin.getline(item.ItemName, 50);
			cout << "Enter the quantity of this item: ";
			cin >> item.Quantity;
			cout << "Enter the whole sale cost of this item: ";
			cin >> item.WholeSaleCost;
			cout << "Enter the retail cost of this item: ";
			cin >> item.RetailCost;

			// write out item to a file
			output.write((char*)(&item), sizeof(item));

			cout << endl;
			// Ask user to enter another item or not
			cout << "Do you want add another item? (Y/N) ";
			cin >> choice;
			cout << endl;

		} while (choice == 'Y' || choice == 'y');
	}
	else
		cout << "Could not open file" << endl;
}

// Funtion to display all of items in the file
void DisplayItem(fstream& input)
{
	Inventory item;
	int count = 0;

	if (input)
	{
		//input.seekg(sizeof(item), ios::beg);
		// Read in a binary number from a file
		input.read((char*)(&item), sizeof(item));

		// Print a table to display all record
		cout << left << setw(5) << "#"
			 << setw(25) << "Item Name"
			 << setw(20) << "Quantity on Hand"
			 << setw(20) << "Wholesale Cost"
			 << setw(20) << "Retail Cost"
			 << endl;

		// Print a dash line
		cout << "---------------------------------------------------------------------------------" << endl;

		while (!input.eof())
		{
			// Format as fixed point notation showing 2 decimal place
			cout << fixed << showpoint << setprecision(2);
			// Display the record
			cout << left << setw(5) << count + 1
				 << setw(25) << item.ItemName
				 << setw(20) << item.Quantity
				 << "$"  << setw(20) << item.WholeSaleCost
				 << "$"  << setw(20) << item.RetailCost
				 << endl;
			// Read the next record from the file
			input.read((char*)(&item), sizeof(item));
			count++;
		}

		cout << endl << endl;
	}
	else
		cout << "Could not open file" << endl;
}

// Funtion to find a item in the file and edit it
void EditItem(fstream& input, fstream& output)
{
	Inventory item;
	int recordNumber;

	cout << "Please enter a record number that you want to edit: ";
	cin >> recordNumber;

	// set read position at recordNumber from beginning of file
	input.seekg((recordNumber - 1) * sizeof(item), ios::beg);
	input.read((char*)(&item), sizeof(item));
	
	cout << endl << left << setw(25) << "Item Name"
		 << setw(20) << "Quantity on Hand"
		 << setw(20) << "Wholesale Cost"
		 << setw(20) << "Retail Cost"
		 << endl;

	cout << "----------------------------------------------------------------------------" << endl;

	
	cout << left << setw(25) << item.ItemName
		 << setw(20) << item.Quantity
		 << "$" << setw(20) << item.WholeSaleCost
		 << "$" << setw(20) << item.RetailCost
		 << endl << endl << endl;

	// Get the new record data
	cout << "Enter the new data for this item" << endl;
	cin.ignore();
	cout << "Enter the item name: ";
	cin.getline(item.ItemName, 50);
	cout << "Enter the quantity of this item: ";
	cin >> item.Quantity;
	cout << "Enter the whole sale cost of this item: ";
	cin >> item.WholeSaleCost;
	cout << "Enter the retail cost of this item: ";
	cin >> item.RetailCost;
	
	// Move back to the beginning of this record's position
	output.seekp((recordNumber - 1) * sizeof(item), ios::beg);
	// Write new record over the current record
	output.write((char*)(&item), sizeof(item));
}