#pragma once
#include "PersonData.h"

/************************************************************
*						CustomerData						*
*************************************************************
* - customerNumber: int										*
* - mailingList: bool										*
*************************************************************
* + CustomerData()											*
* + CustomerData(lastName: string, firstName: string,		*
*				address: string, city: string,				*
*				state: string, zipCode: string,				*
*				phoneNumber: string, customerNumber: int,	*
*				mailingList: bool):							*
* + setCustomerNumber(customerNumber: int): void			*
* + setMaillingList(mailingList: bool): void				*
* + getCustomerNumber(): int								*
* + getMaillingList(): bool									*
************************************************************/

// CustomerData class declaration
class CustomerData : public PersonData
{
private:
	int customerNumber;
	bool mailingList;

public:
	// Constructors #1
	CustomerData();
	// Constructors #2
	CustomerData(string lastName, string firstName, string address, string city, string state, string zipCode, string phoneNumber, int customerNumber, bool mailingList);

	// Mutator functions
	void setCustomerNumber(int customerNumber);
	void setMaillingList(bool mailingList);

	// Accessors functions
	int getCustomerNumber() const;
	bool getMailingList() const;

};