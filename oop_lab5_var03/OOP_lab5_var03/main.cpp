#include <iostream>
#include "functions.h"

using namespace std;

int main() {
	int choice;
	char path1[50];
	char path2[50] = "..\Debug\OOP_lab5_var03.exe";
	char path3[50] = "OOP_lab5_var03.vcxproj.filters";
	char path4[50] = "main.cpp";

	cout << "Open file #";
	cin >> choice;
	cout << endl;

	switch (choice)
	{
	case 1:
		cout << "Path to file: ";
		cin >> path1;
		ReadFromFile(path1);
		break;
	case 2:
		system("cls");
		ReadFromFile(path2);
		break;
	case 3:
		system("cls");
		ReadFromFile(path3);
		break;
	case 4:
		system("cls");
		ReadFromFile(path4);
		break;
	default:
		cout << "Enter 1..4" << endl;
		break;
	}

	system("pause");
	return 0;
}