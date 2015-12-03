/*
 * main.cpp
 *
 *  Created on: Dec 1, 2015
 *      Author: josh
 */

#include "header.h"


int main() {

	int stars;
	int menuChoice;

	printHeader();

	cout << "Welcome to the recursive pattern generator version 0.0.1\n";

	do{
	displayMenu();
	cin >> menuChoice;

	switch(menuChoice) {
	case 0:
		cout << "\nThank you for using my program!";
		break;
	case 1:
		cout << "\nEnter the width of the pattern (integer value): ";
		cin >> stars;
		cout << endl;
		cout << "DISPLAYING HOURGLASS...\n\n";

		hourglass(stars);
		break;
	case 2:
		cout << "\nEnter the width of the pattern (integer value): ";
		cin >> stars;
		cout << endl;
		cout << "DISPLAYING DIAMOND...\n\n";

		diamond(stars, 1, stars - 1);
	}
	}while(menuChoice != 0);
	return 0;
}
