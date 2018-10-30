#include "CustomerData.h"

// Constructor #1
CustomerData::CustomerData()
{
	customerNumber = 0;
	mailingList = false;
}

// Constructor #2
CustomerData::CustomerData(string lastName, string firstName, string address, string city, string state, string zipCode, string phoneNumber, int customerNumber, bool mailingList)
{
	// Set attributes derived from PersonData
	setLastName(lastName);
	setFirstName(firstName);
	setAddress(address);
	setCity(city);
	setState(state);
	setZipCode(zipCode);
	setPhoneNumber(phoneNumber);

	// Set CustomerData attributes
	this->customerNumber = customerNumber;
	this->mailingList = mailingList;
}

// Mutator functions
// setCustomerNumber assigns a value to the customerNumber member
void CustomerData::setCustomerNumber(int customerNumber)
{
	this->customerNumber = customerNumber;
}

// setMaillingList assigns a value to the mailingList member
void CustomerData::setMaillingList(bool mailingList)
{
	this->mailingList = mailingList;
}

// Accessor functions
// Funtion to return customerNumber
int CustomerData::getCustomerNumber() const
{
	return customerNumber;
}

// Funtion to return mailingList
bool CustomerData::getMailingList() const
{
	return mailingList;
}
