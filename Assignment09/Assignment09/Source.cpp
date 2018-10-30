#include <iostream>
#include "CustomerData.h"

/**********************************************************************
* Program Name:   Customer Data
* Author:         Xiaomeng Cao
* Date:           November 3, 2016
* Course/Section: CSC 263-001
* Program Description:
*    This program will have two classes. The first class defines a person,
*	 which means this class can be used for anything that involves a person.
*
* Pseudocode:
*    Initial Algorithm
*    -------
*			1. Create two instances of CustomerData
*			2. Add information to these two instances
*			3. Call function to display all information of customer
*
*    Refined Algorithm
*    -------
*			1. Create the first instance of CustomerData by using default constructor: person1
*			2. Add information to the first instance
*					person1.setLastName()
*					person1.setFirstName()
*					person1.setAddress()
*					person1.setCity()
*					person1.setState()
*					person1.setZipCode()
*					person1.setPhoneNumber()
*					person1.setCustomerNumber()
*					person1.setMaillingList()
*			3. Call function DisplayCustomer to display the information of person1
*			4. Create the second instance of CustomerData by using second constructor: person2
*					person2("Jones", "Jenny", "555 East Street", "Jonesille", "VA", "88888", "222-222-2222", 77777, false)
*			5. Call function DisplayCustomer to display the information of person2
**********************************************************************/

// Function to display the information of customerData
void DisplayCustomer(CustomerData c)
{
	string result;

	// If getMailingList() == 1, set result = Yes
	if (c.getMailingList() == 1)
		result = "Yes";
	else // Else getMailingList() == 0, set result = No
		result = "No";

	// Display all information of customer
	cout << "-----------" << endl
		<< "Last Name: " << c.getLastName() << endl
		<< "First Name: " << c.getFirstName() << endl
		<< "Address: " << c.getAddress() << endl
		<< "City: " << c.getCity() << endl
		<< "State: " << c.getState() << endl
		<< "Zip Code: " << c.getZipCode() << endl
		<< "Phone Number: " << c.getPhoneNumber() << endl
		<< "Customer Number: " << c.getCustomerNumber() << endl
		<< "Mailing List? " << result << endl << endl;
}

int main()
{
	// Create the first instance of CustomerData
	CustomerData person1;

	// Add information to person1
	person1.setLastName("Smith");
	person1.setFirstName("Joan");
	person1.setAddress("123 Main Stret");
	person1.setCity("Smithville");
	person1.setState("NC");
	person1.setZipCode("99999");
	person1.setPhoneNumber("111-111-1111");
	person1.setCustomerNumber(12345);
	person1.setMaillingList(true);

	// Display the information of customer 1
	cout << "Customer #1" << endl;
	DisplayCustomer(person1); // Call function DisplayCustomer

	// Create the second instance of CustomerData and add information to it
	CustomerData person2("Jones", "Jenny", "555 East Street", "Jonesille", "VA", "88888", "222-222-2222", 77777, false);

	// Display the information of customer 2
	cout << "Customer #2" << endl;
	DisplayCustomer(person2); // Call function DisplayCustomer

	return 0;
}