#include <iostream>

// ConstantS
const int ROWS = 5;
const int COLS = 5;

// Protoytype
double GetTotal(double);
double GetAverage(double [][COLS]);
double GetRowTotal(double[][COLS], int);
double GetColumnTotal(double[][COLS], int);
double GetHighest(double[][COLS], int&, int&);
double GetLowest(double[][COLS], int&, int&);
