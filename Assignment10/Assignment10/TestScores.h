#include "NegativeScore.h"
#include "TooLargeScore.h"

/****************************************************
*					TooLargeScore					*
*****************************************************
* - scoresArray[5]: T								*
* - scores: T										*
*****************************************************
* + TestScores()									*
* + TestScores(scoresArray[]: T)					*
* + SetScores(scores: T): void						*
* +	GetScores(): T									*
* +	GetAverage(scoresArray[]: T): T					*
* +	Testing(scoresArray[]: T): void					*
****************************************************/

const int SIZE = 5;

template<class T>
class TestScores
{
private:
	T scoresArray[5];
	T scores;

public:
	// Constructors #1
	TestScores();
	// Constructors #2
	TestScores(T scoresArray[]);
	
	void SetScores(T scores);
	T GetScores();
	T GetAverage(T scoresArray[]);
	void Testing(T scoresArray[]);
};

// Constructors #1
template<class T>
TestScores<T>::TestScores()
{	
}

// Constructors #2
template<class T>
TestScores<T>::TestScores(T scoresArray[])
{
}

// SetScores assigns a value to the scores member
template<class T>
void TestScores<T>::SetScores(T scores)
{
	this->scores = scores;
}

// Funtion to return scores
template<class T>
T TestScores<T>::GetScores()
{
	return scores;
}

// Funtion to caluclate average and return it
template<class T>
T TestScores<T>::GetAverage(T scoresArray[])
{
	double average = 0;

	for (int index = 0; index < SIZE; index++)
	{		
		if (scoresArray[index] < 0) // If a score smaller than 0
		{
			SetScores(scoresArray[index]); // Set the score to the scores member
			throw NegativeScore(); // Throw NegativeScore exception
		}			
		else if (scoresArray[index] > 100) // Else if a score greater than 100
		{
			SetScores(scoresArray[index]); // Set the score to the scores member
			throw TooLargeScore(); // Throw TooLargeScore exception
		}
		average = average + scoresArray[index]; // Get the sum of the array
	}
	
	average = average / SIZE; // Calculate the average

	return average;
}

// Function to test array
template<class T>
void TestScores<T>::Testing(T scoresArray[])
{
	try
	{
		// Print the average of the array
		cout << "The average is: " << GetAverage(scoresArray) << endl;
	}

	// If an score in the passed array is below 0
	catch (NegativeScore e)
	{
		// Print an error message and display the score
		cout << e.GetMessage() << endl;
		cout << "ERROR: " << GetScores() << " is below 0." << endl;
	}

	// If an score in the passed array is above 100
	catch (TooLargeScore e)
	{
		// Print an error message and display the score
		cout << e.GetMessage() << endl;
		cout << "ERROR: " << GetScores() << " is above 100." << endl;
	}
}