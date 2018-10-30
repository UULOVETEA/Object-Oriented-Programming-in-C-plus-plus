#include "PersonData.h"

// Constructor #1
PersonData::PersonData()
{
	lastName = "";
	firstName = "";
	address = "";
	city = "";
	state = "";
	zipCode = "";
	phoneNumber = "";
}

// Constructor #2
PersonData::PersonData(string lastName, string firstName, string address, string city, string state, string zipCode, string phoneNumber)
{
	this->lastName = lastName;
	this->firstName = firstName;
	this->address = address;
	this->city = city;
	this->state = state;
	this->zipCode = zipCode;
	this->phoneNumber = phoneNumber;
}

// Mutator functions
// setLastName assigns a value to the lastName member
void PersonData::setLastName(string lastName)
{
	this->lastName = lastName;
}

// setFirstName assigns a value to the firstName member
void PersonData::setFirstName(string firstName)
{
	this->firstName = firstName;
}

// setAddress assigns a value to the address member
void PersonData::setAddress(string address)
{
	this->address = address;
}

// setCity assigns a value to the city member
void PersonData::setCity(string city)
{
	this->city = city;
}

// setState assigns a value to the state member
void PersonData::setState(string state)
{
	this->state = state;
}

// setZipCode assigns a value to the zipCode member
void PersonData::setZipCode(string zipCode)
{
	this->zipCode = zipCode;
}

// setPhoneNumber assigns a value to the phoneNumber member
void PersonData::setPhoneNumber(string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

// Accessor functions
// Funtion to return lastName
string PersonData::getLastName() const
{
	return lastName;
}

// Funtion to return firstName
string PersonData::getFirstName() const
{
	return firstName;
}

// Funtion to return address
string PersonData::getAddress() const
{
	return address;
}

// Funtion to return city
string PersonData::getCity() const
{
	return city;
}

// Funtion to return state
string PersonData::getState() const
{
	return state;
}

// Funtion to return zipCode
string PersonData::getZipCode() const
{
	return zipCode;
}

// Funtion to return phoneNumber
string PersonData::getPhoneNumber() const
{
	return phoneNumber;
}
