#include <iostream>
#include "EquilateralTriangle.h"
#include "IsoscelesTriangle.h"
#include "RightTriangle.h"
#include "triangle.h"

using namespace std;

void menu() {
	int choice = 0, side1, side2;
	Triangle *triangle;

	while (choice != 4) {
		cout << "A triangle will be created. Select it's type:" << endl;
		cout << "1. Right." << endl;
		cout << "2. Isosceles." << endl;
		cout << "3. Equilateral." << endl;
		cout << "4. End program & exit." << endl << endl << "\t";

		cin >> choice;

		switch (choice)	{
		case 1:
			system("cls");
			
			cout << "Enter the first cathetus: a = ";
			cin >> side1;
			cout << "Enter second cathetus: b = ";
			cin >> side2;
			triangle = new RightTriangle(side1, side2);
			triangle->printInfo();
			delete (triangle);

			system("pause");
			system("cls");
			break;

		case 2:
			system("cls");

			int angle;

			cout << "Enter one of the equal sides: a = ";
			cin >> side1;
			cout << "Enter the base: b = ";
			cin >> side2;

			triangle = new IsoscelesTriangle(side1, side2);
			triangle->printInfo();
			delete (triangle);

			system("pause");
			system("cls");
			break;

		case 3:
			system("cls");

			cout << "Enter one of the three equal sides: a = ";
			cin >> side1;

			triangle = new EquilateralTriangle(side1);
			triangle->printInfo();
			delete (triangle);

			system("pause");
			system("cls");
			break;

		case 4:
			system("cls");
			cout << "Thanks for using my program! Good luck & have fun C:" << endl;

			system("pause");
			system("cls");
			break;

		default:
			system("cls");
			cout << "Wrong choice! Enter number [1..4]" << endl;
			cin >> choice;
			break;
		}

	}
}

void information() {

	cout << "\t-------------------------------" << endl
		<< "\t| Author: Donchenko Max, IP-z41|" << endl
		<< "\t| Variant: 3                   |" << endl
		<< "\t--------------------------------" << endl;

	cout << "\tTask:" << endl
		<< "Design a class hierarchy:" << endl
		<< "<Triangle> class and it's inheritors:" << endl
		<< "- right triangle," << endl
		<< "- isosceles triangle," << endl
		<< "- equilateral triangle." << endl << endl
		<< "Define the methods of calculating the area and perimeter of the triangle" << endl
		<< "in the base class and override them in the inheritors." << endl
		<< "Data-elements of the shapes are declared in the base class and initialized in the inheritors" << endl
		<< "(the data-elements are two sides and the angle between them)." << endl
		<< "Do the task considering that the work with inheritors will run through the abstract base class object." << endl
		<< "Methods which have been defined in the base classes should be purely virtual" << endl << endl;

}
