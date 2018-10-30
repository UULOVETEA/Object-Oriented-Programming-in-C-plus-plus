#include <iostream>
using namespace std;

// Struction
struct Player
{
	string name;
	int number;
	int points;
};

// Globel Variable
const int SIZE = 2;

// Function Prototypes
void GetPlayerInfo(Player* person);
void ShowInfo(Player* person);
int GetTotalPoints(const Player person[], int SIZE);
void ShowHighest(const Player person[], int SIZE);
