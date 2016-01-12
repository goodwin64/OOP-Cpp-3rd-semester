#include <iostream>
#include "functions.h"

using namespace std;

int main() {
	char path[20];

	cout << "Path to file: ";
	cin >> path;
	ReadFromFile(path);

	system("pause");
	return 0;
}