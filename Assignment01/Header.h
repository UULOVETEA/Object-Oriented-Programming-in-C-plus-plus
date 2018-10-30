#include <iostream>

// Constants
const int ROCK = 1;
const int PAPER = 2;
const int SCISSORS = 3;

// Prototypes
int GetUserChoice();
int GetComputerChoice();
bool DetermineWinner(int, int);
void DisplayChoice(int);
