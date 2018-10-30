#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

// Struction
struct Inventory
{
	char ItemName[51];
	int Quantity;
	float WholeSaleCost;
	float RetailCost;
};

// Function Prototypes
void AddItem(fstream& output);
void DisplayItem(fstream& input);
void EditItem(fstream& input, fstream& output);