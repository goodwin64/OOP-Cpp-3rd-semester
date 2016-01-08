#include <iostream>
#include "segment.h"
#include "triangle.h"
#include "prism.h"

using namespace std;

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

void mainAction() {
	Segment ab(12);
	Triangle tr(ab, 12);
	Prism pr(tr, 10);

	ab.printIt();
	tr.printIt();
	pr.printIt();
}

void printMenu() {
	char choice = 'A'; // to be continued

	while (choice != 'E') {
		cout << "\tprint (I)nfo or (S)tart / (E)nd program: ";
		cin >> choice;
		cout << endl << endl;
		switch (choice)
		{
		case 'I':
			printInfo();
			break;
		case 'S':
			mainAction();
			break;
		case 'E':
			// ignore
			break;
		default:
			cout << "Enter I, S or E:" << endl;
			break;
		}
	}
}