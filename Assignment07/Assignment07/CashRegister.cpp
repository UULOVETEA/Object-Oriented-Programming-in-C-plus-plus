#include "CashRegister.h"

// Constructor #1
CashRegister::CashRegister()
{
	inventory = {};
	units = 0;
}

// Constructor #2
CashRegister::CashRegister(InventoryItem i)
{
	inventory = i;
}

// Constructor #3
CashRegister::CashRegister(InventoryItem i, int u)
{
	inventory = i;
	units = u;
}

// Destructor
CashRegister::~CashRegister()
{

}

// Mutator functions
// SetInventory assigns a value to the inventory member
void CashRegister::SetInventory(InventoryItem i)
{
	inventory = i;
}

// setUnits assigns a value to the units member
void CashRegister::SetUnits(int u)
{
	units = u;
}

// Accessor functions
// GetUnits returns the value in the units member
int CashRegister::GetUnits() const
{
	return units;
}

// GetCost returns the value from inventory structure
double CashRegister::GetCost() const
{
	return inventory.getCost();
}

// GetProfit returns the product of cost times PROFIT_RATE
double CashRegister::GetProfit() const
{
	return GetCost() * PROFIT_RATE;
}

// GetUnitPirce returns the sum of cost plus profit
double CashRegister::GetUnitPirce() const
{
	return GetCost() + GetProfit();
}

// GetSubtotal returns the product of unitPrice times units
double CashRegister::GetSubtotal() const
{
	return GetUnitPirce() * units;
}

// GetTax returns the product of subTotal times TAX_RATE
double CashRegister::GetTax() const
{
	return GetSubtotal() * TAX_RATE;
}

// GetTotal returns the sum of subTotal plus tax
double CashRegister::GetTotal() const
{
	return GetSubtotal() + GetTax();
}
