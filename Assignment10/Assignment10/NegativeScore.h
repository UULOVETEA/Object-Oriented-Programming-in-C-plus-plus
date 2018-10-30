#pragma once
#include <string>
using namespace std;

/****************************************************
*					NegativeScore					*
*****************************************************
* - msg: string										*
*****************************************************
* + NegativeScore()									*
* + ~NegativeScore()								*
* + NegativeScore(msg: string)						*
* +	GetMessage(): string							*
****************************************************/

class NegativeScore
{
	private:
		string msg;

	public:
		NegativeScore();
		~NegativeScore();
		NegativeScore(string msg);
		string GetMessage();
};

NegativeScore::NegativeScore()
{
	msg = "Grades must be greater than 0";
}

NegativeScore::~NegativeScore()
{
}

NegativeScore::NegativeScore(string msg)
{
	this->msg = msg;
}

string NegativeScore::GetMessage()
{
	return msg;
}