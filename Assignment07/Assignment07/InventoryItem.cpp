#include "InventoryItem.h"

// Constructor #1
InventoryItem::InventoryItem()
{
	// Initialize cost and units.
	cost = 0.0;
	units = 0;
	description = "";
}

// Constructor #2
InventoryItem::InventoryItem(string desc)
{
	// Initialize cost and units.
	cost = 0.0;
	units = 0;
	description = desc;
}

// Constructor #3
InventoryItem::InventoryItem(string desc, double c, int u)
{
	// Assign values to cost and units.
	cost = c;
	units = u;
	description = desc;
}

// Destructor
InventoryItem::~InventoryItem()
{

}

// Mutator functions
// setDescription assigns a string to the description member
void InventoryItem::setDescription(string d)
{
	description = d;
}

// setCost assigns a value to the cost member
void InventoryItem::setCost(double c)
{
	cost = c;
}

// setUnits assigns a value to the units member
void InventoryItem::setUnits(int u)
{
	units = u;
}

// Accessor functions
// getDescription returns the string in the description member
string InventoryItem::getDescription() const
{
	return description;
}

// getCost returns the value in the cost member
double InventoryItem::getCost() const
{
	return cost;
}

// getUnits returns the value in the units member
int InventoryItem::getUnits() const
{
	return units;
}