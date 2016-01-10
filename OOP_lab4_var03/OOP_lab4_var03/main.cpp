#include <iostream>
#include "Vector.h"

using namespace std;

int main() {
	double arr[10] = {
		1, 2, 3.4, 5e6, 7e-8,
		-9.1011, -12, 1, 3.1415, 0
	};
	double *p = arr;

	Vector a(10, p);
	a.print();
	a++;
	a.print();
	a--;
	a.print();

	system("pause");
	return 0;
}