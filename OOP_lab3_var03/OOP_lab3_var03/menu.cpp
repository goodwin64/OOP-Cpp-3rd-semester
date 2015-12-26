#include <iostream>
#include "equilateralTriangle.h"
#include "IsoscelesTriangle.h"
#include "rightTriangle.h"
#include "triangle.h"

using namespace std;

void menu(){
	int choice = 0;
	Triangle *triangle;

	while (choice != 4){
		cout << "C������� �����:" << endl;
		cout << "1. ������������� �����������." << endl;
		cout << "2. �������������� �����������." << endl;
		cout << "3. �������������� �����������." << endl;
		cout << "4. �����." << endl << endl << "\t";

		cin >> choice; 

		if (choice <= 0 || choice >= 5){
			system("cls");
			cout << "�������! ���������� �����:" << endl;
			cin >> choice;
		}
	
		else if (choice == 1){
			system("cls");

			int side1;
			int side2;

			cout << "������� ������ �����: a = ";
			cin >> side1;
			cout << "������� ������ �����: b = ";
			cin >> side2;
			triangle = new rightTriangle(side1, side2);
			cout << "������� �������������� ������������, S = " << triangle->area() << endl;
			cout << "�������� �������������� ������������, P = " << triangle->perimeter() << endl;
			delete (triangle);

			system("pause");
			system("cls");
		}
	
		else if (choice == 2){
			system("cls");

			int side1;
			int side2;
			int angle;

			cout << "������� ���� �� ������ ������: a = ";
			cin >> side1;
			cout << "������� ���������: b = ";
			cin >> side2;
			cout << "������� ���� ����� ���������� ���������: ";
			cin >> angle;

			triangle = new IsoscelesTriangle(side1, side2, angle);
			cout << "������� ��������������� ������������, S = " << triangle->area() << endl;
			cout << "�������� ��������������� ������������, P = " << triangle->perimeter() << endl;
			delete (triangle);

			system("pause");
			system("cls");
		}

		else if (choice == 3){
			system("cls");

			int side1;

			cout << "������� �������: a = ";
			cin >> side1;

			triangle = new equilateralTriangle(side1);
			cout << "������� ��������������� ������������, S = " << triangle->area() << endl;
			cout << "�������� ��������������� ������������, P = " << triangle->perimeter() << endl;
			delete (triangle);

			system("pause");
			system("cls");
		}
	}
}

void information(){

	cout << "\t-------------------------------" << endl
		<< "\t| Author: Donchenko Max, IP-z41|" << endl
		<< "\t| Variant: 3                   |" << endl
		<< "\t--------------------------------" << endl;

}
