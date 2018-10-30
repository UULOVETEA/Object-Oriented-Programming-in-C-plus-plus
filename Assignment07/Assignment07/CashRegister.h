#pragma once
#ifndef CASHREGISTER_H
#define CASHREGISTER_H
#include "InventoryItem.h"

/************************************************************
*						InventoryItem						*
*************************************************************
* - inventory: InventoryItem								*
* - units: int												*
*************************************************************
* + CashRegister()											*
* + CashRegister(inventory: InventoryItem):					*
* + CashRegister(inventory: InventoryItem, units: int):		*
* + ~CashRegister():										*
* + SetInventory(i: InventoryItem):	void					*
* + SetUnits(u: int): void									*
* + GetUnits(): int											*
* + GetCost(): double										*
* + GetProfit(): double										*
* + GetUnitPirce(): double									*
* + GetSubtotal(): double									*
* + GetTax(): double										*
* + GetTotal(): double										*
************************************************************/

// Constant
const double PROFIT_RATE = 0.3; // Profit rate 30%
const double TAX_RATE = 0.06; // Tax rate 6%

// CashRegister class declaration
class CashRegister
{
	private:
		InventoryItem inventory;
		int units; // Number of units on hand

	public:
		// Constructor #1
		CashRegister();

		// Constructor #2
		CashRegister(InventoryItem inventory);

		// Constructor #3
		CashRegister(InventoryItem inventory, int units);

		// Destructor
		~CashRegister();

		// Mutator functions
		void SetInventory(InventoryItem i);

		void SetUnits(int u);

		// Accessor functions
		int GetUnits() const;
			
		double GetCost() const;

		double GetProfit() const;

		double GetUnitPirce() const;

		double GetSubtotal() const;

		double GetTax() const;

		double GetTotal() const;
};

#endif