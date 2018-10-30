#include <iostream>
#include <cctype>
#include <string>
#include "Header.h"

using namespace std;

int main()
{
	string userSearch;
	string list[] = { "Renee Javens, 678-1223",
					  "Joe Looney, 586-0097",
					  "Geri Palmer, 223-8787",
					  "Lynn Presnell, 887-1212",
					  "Bill Wolfe, 223-8878",
					  "Sam Wiggins, 486-0998",
					  "Bob Kain, 586-8712",
					  "Tim Haynes, 586-7676",
					  "John Johnson, 223-9037",
					  "Ron Palmer, 486-2783"};
	
	// Get input from user
	cout << "Type in a name to search: ";
	getline(cin, userSearch);
	cout << endl;

	// Search input in the array
	SearchArray(userSearch, list);
	
	// Print two blank line
	cout << endl << endl;

	system("pause");
	return 0;
}

