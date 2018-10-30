#pragma once
// Specification file for the FeetInches class
#ifndef FEETINCHES_H
#define FEETINCHES_H

#include <iostream>
using namespace std;

/********************************************************************
*							FeetInches								*
*********************************************************************
* - feet: int														*
* - inches: int														*
* - simplify(): void												*
*********************************************************************
* + FeetInches(f = 0: int, i = 0, int):								*
* + FeetInches(&right: const FeetInches):							*
* + multiply(obj: FeetInches): FeetInches							*
* + setFeet(f: int): void											*
* + setInches(i: int): void											*
* + getFeet() const: int											*
* + getInches() const: int											*
* + operator + (const FeetInches &): FeetInches						*
* + operator - (const FeetInches &): FeetInches						*
* + operator ++ (): FeetInches										*
* + operator ++ (int): FeetInches									*
* + operator >= (const FeetInches &): bool							*
* + operator <= (const FeetInches &): bool							*
* + operator != (const FeetInches &): bool							*
* +	operator double():												*	
* +	operator int():													*
* +	friend ostream &operator << (ostream &, const FeetInches &):	*
* +	friend istream &operator >> (istream &, FeetInches &):			*
********************************************************************/

class FeetInches; // Forward Declaration

// Function Prototypes for Overloaded Stream Operators
ostream &operator << (ostream &, const FeetInches &);
istream &operator >> (istream &, FeetInches &);

// The FeetInches class holds distances or measurements 
// expressed in feet and inches.

class FeetInches
{
	private:
		int feet;        // To hold a number of feet
		int inches;      // To hold a number of inches
		void simplify(); // Defined in FeetInches.cpp
	public:
		// Constructor
		FeetInches(int f = 0, int i = 0)
		{
			feet = f;
			inches = i;
			simplify();
		}

		// Copy constructor
		FeetInches(const FeetInches &right)
		{
			feet = right.feet;
			inches = right.inches;
		}

		// Multiply function
		FeetInches multiply(FeetInches obj)
		{
			FeetInches temp;
			temp.feet = feet * obj.feet;
			temp.inches = inches * obj.inches;
			temp.simplify();
			return temp;
		}

		// Mutator functions
		void setFeet(int f)
		{
			feet = f;
		}

		void setInches(int i)
		{
			inches = i;
			simplify();
		}

		// Accessor functions
		int getFeet() const
		{
			return feet;
		}

		int getInches() const
		{
			return inches;
		}

		// Overloaded operator functions
		FeetInches operator + (const FeetInches &);
		FeetInches operator - (const FeetInches &);
		FeetInches operator ++ ();    // Prefix ++
		FeetInches operator ++ (int); // Postfix ++
		bool operator >= (const FeetInches &);
		bool operator <= (const FeetInches &);
		bool operator != (const FeetInches &);

		// Conversion functions
		operator double();
		operator int();

		// Friends
		friend ostream &operator << (ostream &, const FeetInches &);
		friend istream &operator >> (istream &, FeetInches &);
};

#endif