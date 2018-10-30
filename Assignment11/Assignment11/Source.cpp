#include "LinkedList.h"
#include "WeatherStats.h"

/**********************************************************************
* Program Name:   Weather Data
* Author:         Xiaomeng Cao
* Date:           November 16, 2016
* Course/Section: CSC 263-001
* Program Description:
*    This program will create a class that holds information about the 
*	 weather for a given month this class will be called WeatherStats.
*
* Pseudocode:
*    Initial Algorithm
*    -------
*			1. Create instance of  WeatherStats
*			2. Create instance of LinkedList<WeatherStats>
*			3. Ask user how many months they want to enter
*			4. Ask user the rain amount for this month
*			5. Ask user the snow amount for this month
*			6. ASk user the total sunny days for this month
*			7. Display the weather stats for each month
*			8. Display the highest and lowest records
*
*    Refined Algorithm
*    -------
*			1. Create instance of  WeatherStats
*					WeatherStats weather;
*			2. Create instance of LinkedList<WeatherStats>
*					LinkedList<WeatherStats> list
*			3. Ask user how many months they want to enter
*			FOR
*					4. Ask user the rain amount for this month
*					5. Ask user the snow amount for this month
*					6. ASk user the total sunny days for this month
*					Stored the data in a WeatherStats class and then appended the data to the linked list
*			END FOR
*			7. Display the weather stats for each month
*					Call DisplayList function in LinkedList
*			8. Display the highest and lowest records
**********************************************************************/

void WeatherHighLow(LinkedList<WeatherStats>& list, int months);

int main()
{
	// Define some WeatherStats objects
	WeatherStats weather;
	// Create a LinkedList object
	LinkedList<WeatherStats> list;
	int months;
	double rainTotal;
	double snowTotal;
	int sunnyDays;

	// Ask user how many months they want to enter
	cout << "How many months do you wish to enter weather statistics for: ";
	cin >> months;
	
	cout << "Enter in the stats for each month." << endl;
	for (int index = 0; index < months; index++)
	{
		cout << "Month " << (index + 1) << endl;
		// Ask user the rain amount for this month
		cout << "Rain amount for this month: ";
		cin >> rainTotal;
		// Ask user the snow amount for this month
		cout << "Snow amount for this month: ";
		cin >> snowTotal;
		// ASk user the total sunny days for this month
		cout << "Total number of days with sunshine for this month: ";
		cin >> sunnyDays;
		cout << endl;

		// Stored the data in a WeatherStats class
		weather.SetRainTotal(rainTotal);
		weather.SetSnowTotal(snowTotal);
		weather.SetSunnyDays(sunnyDays);

		// Appended the data to the linked list
		list.AppendNode(weather);
	}

	// Display the weather stats for each month
	cout << "Record" << endl 
		<< "------------------------------------------" << endl;
	list.DisplayList(); // Call DisplayList function in LinkedList

	// Display the highest and lowest records
	WeatherHighLow(list, months);

	return 0;
}


// Function to display highest and lowest records
void WeatherHighLow(LinkedList<WeatherStats>& list, int months)
{
	double HighRain, HighSonw, LowRain, LowSnow;
	int HighSunny, LowSunny;

	// Check highest
	// Set initial high values to first item in the list
	HighRain = list.CheckNode(1).GetRainTotal();
	HighSonw = list.CheckNode(1).GetSnowTotal();
	HighSunny = list.CheckNode(1).GetSunnyDays();

	// If found highest values reassign high values
	for (int index = 2; index < months + 1; index++)
	{
		if (list.CheckNode(index).GetRainTotal() > HighRain)
			HighRain = list.CheckNode(index).GetRainTotal();
		if (list.CheckNode(index).GetSnowTotal() > HighSonw)
			HighSonw = list.CheckNode(index).GetSnowTotal();
		if (list.CheckNode(index).GetSunnyDays() > HighSunny)
			HighSunny = list.CheckNode(index).GetSunnyDays();
	}

	// Check highest
	// Set initial low values to first item in the list
	LowRain = list.CheckNode(1).GetRainTotal();
	LowSnow = list.CheckNode(1).GetSnowTotal();
	LowSunny = list.CheckNode(1).GetSunnyDays();

	// If found lowest values reassign low values
	for (int index = 2; index < months + 1; index++)
	{
		if (list.CheckNode(index).GetRainTotal() < LowRain)
			LowRain = list.CheckNode(index).GetRainTotal();
		if (list.CheckNode(index).GetSnowTotal() < LowSnow)
			LowSnow = list.CheckNode(index).GetSnowTotal();
		if (list.CheckNode(index).GetSunnyDays() < LowSunny)
			LowSunny = list.CheckNode(index).GetSunnyDays();
	}

	//Display the result
	cout << "-------------------------------------------------" << endl;
	cout << "Higest record:" << endl;
	cout << "Rain: " << HighRain << " inches" << endl;
	cout << "Snow: " << HighSonw << " inches" << endl;
	cout << "Sunny day: " << HighSunny << " days" << endl << endl;
	
	cout << "Lowest record:" << endl;
	cout << "Rain: " << LowRain << " inches" << endl;
	cout << "Snow: " << LowSnow << " inches" << endl;
	cout << "Sunny day: " << LowSunny << " days" << endl;
}