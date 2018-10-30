#include "RoomCarpet.h"

// Constructor #1
RoomCarpet::RoomCarpet()
{
}

// Constructor #2
RoomCarpet::RoomCarpet(FeetInches l, FeetInches w, RoomDimension r, double c)
{
	setLength(l);
	setWidth(w);
	room = r;
	cost = c;
}

// Mutator functions
// setRoom assigns a value to the room member
void RoomCarpet::setRoom(RoomDimension r)
{
	room = r;
}

// setCost assigns a value to the cost member
void RoomCarpet::setCost(double c)
{
	cost = c;
}

// Accessor functions
// Funtion to return total cost
double RoomCarpet::getTotalCost() const
{
	double totalCost, area;
	RoomDimension temp;
	temp = room;
	area = temp.getArea();
	totalCost = area * cost;
	return totalCost;
}
