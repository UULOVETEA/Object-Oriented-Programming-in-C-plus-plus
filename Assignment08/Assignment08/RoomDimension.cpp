#include "RoomDimension.h"
#include "FeetInches.h"

// Constructor #1
RoomDimension::RoomDimension()
{
}

// Constructor #2
RoomDimension::RoomDimension(FeetInches feet, FeetInches inches, FeetInches l, FeetInches w)
{
	setFeet(feet);
	setInches(inches);
	length = l;
	width = w;
}

// Mutator functions
// setLength assigns a value to the length member
void  RoomDimension::setLength(FeetInches l)
{
	length = l;
}

// setWidth assigns a value to the width member
void  RoomDimension::setWidth(FeetInches w)
{
	width = w;
}

// Accessor functions
// Return the area of the room as FeetInches object
FeetInches RoomDimension::getArea()
{
	FeetInches area;
	area = width.multiply(length);
	return area;
}