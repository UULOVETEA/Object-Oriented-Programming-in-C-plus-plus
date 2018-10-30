#pragma once
// Specification file for the RoomDimension class
#ifndef ROOMDIMENSION_H
#define ROOMDIMENSION_H
#include "FeetInches.h"

/************************************************************
*						RoomDimension						*
*************************************************************
* - length: FeetInches										*
* - width: FeetInches										*
*************************************************************
* + RoomDimension()											*
* + RoomDimension(l: FeetInches, w: FeetInches):			*
* + setLength(l: FeetInches): void							*
* + setWidth(w: FeetInches): void							*
* + getArea(): FeetInches									*
************************************************************/

// RoomDimension class declaration
class RoomDimension : public FeetInches
{
	private:
		FeetInches length; // To hold length of room
		FeetInches width; // To hold width of room

	public:
		// Constructors #1
		RoomDimension();

		// Constructors #2
		RoomDimension(FeetInches feet, FeetInches inches, FeetInches l, FeetInches w);

		// Mutator functions
		void setLength(FeetInches l);
		void setWidth(FeetInches w);

		// Accessors functions
		FeetInches getArea();
};
#endif