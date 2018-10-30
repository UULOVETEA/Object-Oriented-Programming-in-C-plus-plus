#pragma once
#include <string>
using namespace std;

/************************************************************
*						CustomerData						*
*************************************************************
* - lastName: string										*
* - firstName: string										*
* - address: string											*
* - city: string											*
* - state: string											*
* - zipCode: string											*
* - phoneNumber: string										*
*************************************************************
* + PersonData()											*
* + PersonData(lastName: string, firstName: string,			*
*				address: string, city: string,				*
*				state: string, zipCode: string,				*
*				phoneNumber: string):						*
* + setLastName(lastName: string): void						*
* +	setFirstName(firstName: string): void					*
* + setAddress(address: string): void						*
* +	setCity(city: string): void								*
* +	setState(state: string): void							*
* +	setZipCode(zipCode: string): void						*
* +	setPhoneNumber(phoneNumber: string): void				*
* + getLastName() const: string								*
* +	getFirstName() const: string							*
* +	getAddress() const: string								*
* +	getCity() const: string									*
* +	getState() const: string								*
* +	getZipCode() const: string								*
* +	getPhoneNumber() const: string							*
************************************************************/

// PersonData class declaration
class PersonData
{
	private:
		string lastName;
		string firstName;
		string address;
		string city;
		string state;
		string zipCode;
		string phoneNumber;

	public:
		// Constructors #1
		PersonData();
		// Constructors #2
		PersonData(string lastName, string firstName, string address, string city, string state, string zipCode, string phoneNumber);

		// Mutator functions
		void setLastName(string lastName);
		void setFirstName(string firstName);
		void setAddress(string address);
		void setCity(string city);
		void setState(string state);
		void setZipCode(string zipCode);
		void setPhoneNumber(string phoneNumber);

		// Accessors functions
		string getLastName() const;
		string getFirstName() const;
		string getAddress() const;
		string getCity() const;
		string getState() const;
		string getZipCode() const;
		string getPhoneNumber() const;
};