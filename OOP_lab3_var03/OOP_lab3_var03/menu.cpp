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
		cout << "Cделайте выбор:" << endl;
		cout << "1. Прямоугольный треугольник." << endl;
		cout << "2. Равнобедренный треугольник." << endl;
		cout << "3. Равносторонний треугольник." << endl;
		cout << "4. Выход." << endl << endl << "\t";

		cin >> choice; 

		if (choice <= 0 || choice >= 5){
			system("cls");
			cout << "Неверно! Попробуйте снова:" << endl;
			cin >> choice;
		}
	
		else if (choice == 1){
			system("cls");

			int side1;
			int side2;

			cout << "Введите первый катет: a = ";
			cin >> side1;
			cout << "Введите второй катет: b = ";
			cin >> side2;
			triangle = new rightTriangle(side1, side2);
			cout << "Площадь прямоугольного треугольника, S = " << triangle->area() << endl;
			cout << "Периметр прямоугольного треугольника, P = " << triangle->perimeter() << endl;
			delete (triangle);

			system("pause");
			system("cls");
		}
	
		else if (choice == 2){
			system("cls");

			int side1;
			int side2;
			int angle;

			cout << "Введите одну из равных сторон: a = ";
			cin >> side1;
			cout << "Введите основание: b = ";
			cin >> side2;
			cout << "Введите угол между введенными сторонами: ";
			cin >> angle;

			triangle = new IsoscelesTriangle(side1, side2, angle);
			cout << "Площадь равнобедренного треугольника, S = " << triangle->area() << endl;
			cout << "Периметр равнобедренного треугольника, P = " << triangle->perimeter() << endl;
			delete (triangle);

			system("pause");
			system("cls");
		}

		else if (choice == 3){
			system("cls");

			int side1;

			cout << "Введите сторону: a = ";
			cin >> side1;

			triangle = new equilateralTriangle(side1);
			cout << "Площадь равностороннего треугольника, S = " << triangle->area() << endl;
			cout << "Периметр равностороннего треугольника, P = " << triangle->perimeter() << endl;
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
