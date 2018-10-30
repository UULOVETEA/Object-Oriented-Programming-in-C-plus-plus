#pragma once
#include <string>
using namespace std;

/****************************************************
*					TooLargeScore					*
*****************************************************
* - msg: string										*
*****************************************************
* + TooLargeScore()									*
* + ~TooLargeScore()								*
* + TooLargeScore(msg: string)						*
* +	GetMessage(): string							*
****************************************************/

class TooLargeScore
{
	private:
		string msg;

	public:
		TooLargeScore();
		~TooLargeScore();
		TooLargeScore(string msg);
		string GetMessage();
};

TooLargeScore::TooLargeScore()
{
	msg = "Grades must be smaller than 100";
}

TooLargeScore::~TooLargeScore()
{
}

TooLargeScore::TooLargeScore(string msg)
{
	this->msg = msg;
}

string TooLargeScore::GetMessage()
{
	return msg;
}