#include <iostream>
#include "segment.h"
#include "triangle.h"
#include "prism.h"

using namespace std;

void printMenu() {
	int choice = 0; // to be continued
	
	cout << "(S)tart / (E)nd program" << endl;

	while (choice != 'E') {
		cin >> choice;
		switch (choice)
		{
		case 'S':
			// some actions
			break;
		case 'E':
			// some actions
			break;
		default:
			// some actions
			break;
		}
	}
}

void printInfo() {
	cout << "\t-------------------------------" << endl
		<< "\t| Author: Donchenko Max, IP-z41|" << endl
		<< "\t| Lab: 2                       |" << endl
		<< "\t| Variant: 3                   |" << endl
		<< "\t--------------------------------" << endl;

	cout << "\tTask:" << endl
		<< "Build classes' hierarchy:" << endl
		<< "Segment (length) -> Triangle(Segment + height) -> Prism (Triangle + height)" << endl
		<< "and find (if it's possible) the perimeter, area and volume." << endl
		<< "Data-elements must be protected." << endl << endl;
}