/*
 * functions.cpp
 *
 *  Created on: Dec 1, 2015
 *      Author: josh
 */
#include "header.h"

void hourglass(int maxStars)
{
	// Print current row of stars
	for(int x = 0; x < maxStars; x++)
	{
		cout << "*";
	}

	// Fix to make sure there is no space after the first half of stars
	if(maxStars != 1)
	{
		cout << endl;
	}

	// Exit condition
	if(maxStars < 1) {
		return;
	}

	// Recursive call with a decremented argument passed in
	hourglass(maxStars - 1);

	// Prints second half upside down
	for(int z = 0; z < maxStars; z++) {
			cout << "*";
		}
		cout << endl;
}

void diamond(int maxStars, int numOfStars, int spaces) {

	string stars;

	// input the row of stars into the stars string variable and adjust the spacing appropriately for output
		stars = string(spaces, ' ');
		for(int k = 0; k < numOfStars; k++) {
			stars = stars + "*";
		}

	// Prints out the current row (recursively called to create entire top half of diamond)
	cout << stars;
	cout << endl;

 // Exit condition
	if(numOfStars == maxStars)
	{
		return;
	}

	diamond(maxStars, numOfStars + 1, spaces - 1);

	// Prints out the bottom half
	cout << stars;
	cout << endl;

}

void displayMenu() {
	cout << "\nChoose a pattern\n";
	cout << "0 - EXIT\n";
	cout << "1 - HOURGLASS\n";
	cout << "2 - DIAMOND\n";
	cout << "Enter command: ";
}

void printHeader() {
	/*********************************************************************
	* CONSTANTS
	* --------------------------------------------------------------------
	* USED FOR CLASS HEADING - ALL WILL BE OUTPUT
	* --------------------------------------------------------------------
	* PROGRAMMER : Josh Yolles
	* CLASS                               : CS1B
	* SECTION                          : TTH 5:00p - 9:20p
	* ASSIGNMENT_NUM     :  ??
	* ASSIGNMENT_NAME   :  Recursion
	*********************************************************************/
	const char PROGRAMMER[40] = "Joshua Yolles";
	const char CLASS[5]       = "CS1B";
	const char SECTION[45]    = "TH 5:00p - 9:20p";
	const string LAB_NUM = "";
	const char LAB_NAME[37]   = "Recursion";


// OUTPUT - Class Heading
    cout << left;
    cout << "********************************************************";
    cout << "\n* PROGRAMMED BY : "<<PROGRAMMER;
    cout << "\n* " <<setw(15) << "CLASS" << ": " << CLASS;
    cout << "\n* " << setw(13) << "SECTION" << ": " << SECTION;
    cout << "\n* ASS #" << setw(10) << LAB_NUM << ": " << LAB_NAME;
    cout << "\nwww.joshyolles.com | josh@whaicehockey.com";
    cout << "\n******************************************************\n\n";
    cout << right;
}
