#pragma once
#include <iostream>
using namespace std;

/************************************************************************
*								WeatherStats							*
*************************************************************************
* - rainTotal: double													*
* - snowTotal: double													*
* - sunnyDays: int														*
*************************************************************************
* + WeatherStats(rainTotal: double, snowTotal: double, sunnyDays: int)	*
* + WeatherStats()														*
* + SetRainTotal(rainTotal: double): void								*
* + SetSnowTotal(snowTotal: double): void								*
* + SetSunnyDays(sunnyDays: int): void									*
* + GetRainTotal(): double												*
* + GetSnowTotal(): double												*
* + GetSunnyDays(): int													*
************************************************************************/

// WeatherStats class declaration
class WeatherStats
{
	private:
		double rainTotal;
		double snowTotal;
		int sunnyDays;

	public:
		// Constructors #1
		WeatherStats(double rainTotal, double snowTotal, int sunnyDays);
		// Constructors #2
		WeatherStats();

		// Mutator functions
		void SetRainTotal(double rainTotal);
		void SetSnowTotal(double snowTotal);
		void SetSunnyDays(int sunnyDays);

		// Accessors functions
		double GetRainTotal() const;
		double GetSnowTotal() const;
		int GetSunnyDays() const;

		friend ostream& operator << (ostream& out, const WeatherStats& obj);
};