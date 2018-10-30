#include "WeatherStats.h"

// Constructors #1
WeatherStats::WeatherStats(double rainTotal, double snowTotal, int sunnyDays)
{
	this->rainTotal = rainTotal;
	this->snowTotal = snowTotal;
	this->sunnyDays = sunnyDays;
}

// Constructors #2
WeatherStats::WeatherStats()
{
	rainTotal = 0;
	snowTotal = 0;
	sunnyDays = 0;
}

// SetRainTotal assigns a value to the rainTotal member
void WeatherStats::SetRainTotal(double rainTotal)
{
	this->rainTotal = rainTotal;
}

// SetSnowTotal assigns a value to the snowTotal member
void WeatherStats::SetSnowTotal(double snowTotal)
{
	this->snowTotal = snowTotal;
}

// SetSunnyDays assigns a value to the sunnyDays member
void WeatherStats::SetSunnyDays(int sunnyDays)
{
	this->sunnyDays = sunnyDays;
}

// Funtion to return rainTotal
double WeatherStats::GetRainTotal() const
{
	return rainTotal;
}

// Funtion to return snowTotal
double WeatherStats::GetSnowTotal() const
{
	return snowTotal;
}

// Funtion to return sunnyDays
int WeatherStats::GetSunnyDays() const
{
	return sunnyDays;
}

ostream& operator << (ostream& out, const WeatherStats& obj)
{
	cout << "Rain: " << obj.rainTotal << " inches" << endl;
	cout << "Snow: " << obj.snowTotal << " inches" << endl;
	cout << "Sunny day: " << obj.sunnyDays << " days" << endl;

	return out;
}