#include <iostream>
#include <float.h>
#include "Header.h"

// gets the total of the complete array except for the totals in the last column and last row.  
double GetTotal(double Numbers[][COLS])
{
	double total = 0;
	
	for(int index = 0; index < ROWS - 1; index++)
	{
		for(int counter = 0; counter < COLS -1; counter++)
		{
			total = Numbers[index][counter] + total;
		}
	}
	
	return total;
}

// return the average of all the values in the array except for the column and row with the totals in them. 
double GetAverage(double Numbers[][COLS])
{
	double average;
	
	average = GetTotal(Numbers)/((ROWS-1) * (COLS-1));
	
	return average;
}

// returns the total for row that is specified by the second parameter to the function. 
double GetRowTotal(double Numbers[][COLS], int index)
{
	double rowTotal = 0;
	
	for(int counter = 0; counter < COLS - 1; counter++)
	{
		rowTotal += Numbers[index][counter];
	}
	
	return rowTotal;
}

// returns the total for a column that is specified by the second parameter to the function. 
double GetColumnTotal(double Numbers[][COLS], int counter)
{
	double columnTotal = 0;
	
	for(int index = 0; index < ROWS; index++)
	{
		columnTotal += Numbers[index][counter];
	}
	
	return columnTotal;
}

// returns the highest value in the array.
double GetHighest(double Numbers[][COLS], int&row, int&col)
{
	// initialize the highest to 0
	double highest = 0;
	
	for(int r = 0; r < ROWS - 1; r++)
	{
		for(int c = 0; c < COLS - 1; c++)
		{
			if(highest < Numbers[r][c])
			{
				highest = Numbers[r][c];
				row = r;
				col = c;
			}
		}
	}
	
	return highest;
}

// returns the lowest value in the array. 
double GetLowest(double Numbers[][COLS], int&row, int&col)
{
	// initialize the lowest to infinity
	double lowest = DBL_MAX;
	
	for(int r = 0; r < ROWS - 1; r++)
	{
		for(int c = 0; c < COLS - 1; c++)
		{
			if(lowest > Numbers[r][c])
			{
				lowest = Numbers[r][c];
				row = r;
				col = c;
			}
		}
	}
	
	return lowest;
}
