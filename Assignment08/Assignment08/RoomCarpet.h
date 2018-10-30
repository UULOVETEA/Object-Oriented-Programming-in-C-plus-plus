#pragma once
// Specification file for the RoomCarpet class
#ifndef ROOMCARPET_H
#define ROOMCARPET_H
#include "RoomDimension.h"

/************************************************************
*						RoomCarpet							*
*************************************************************
* - cost: double											*
* - room: RoomDimension										*
*************************************************************
* + RoomCarpet()											*
* + RoomCarpet(r RoomDimension, c: double):					*
* + setRoom(r: RoomDimension): void							*
* + setCost(c: double): void								*
* + getTotalCost() const: double							*
************************************************************/

// RoomCarpet class declaration
class RoomCarpet : public RoomDimension
{	
	private:
		double cost;  // To hold cost per square foot
		RoomDimension room; // RoomDimension attribute

	public:
		// Constructor #1
		RoomCarpet();

		// Constructor #2
		RoomCarpet(FeetInches l, FeetInches w, RoomDimension r, double c);

		// Mutator functions
		void setRoom(RoomDimension r);
		void setCost(double c);

		// Accessor functions
		double getTotalCost() const;
};
#endif

