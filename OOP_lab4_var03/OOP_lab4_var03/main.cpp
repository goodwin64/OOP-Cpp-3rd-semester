#include <iostream>
#include "Vector.h"

using namespace std;

int main() {
	double *arr = new double[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = 0;
	}

	Vector a(10, arr);
	Vector b = {1.2,2.3,3.4,4.5};

	a.print();
	a++;
	a.print();
	b.print();
	b.randomInput(10,25);
	b.print();
	a = b;
	a.print();

	system("pause");
	return 0;
}