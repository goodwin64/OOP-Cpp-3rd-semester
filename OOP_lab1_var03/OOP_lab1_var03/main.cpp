#include <iostream>
#include "Point.h"

using namespace std;

int main() {
	class Point a(1, 13); // kind of declaration with word "class"
	a.setCoordinates(1, 13);
	a.setCoordinates(14, 1.3);
	Point b(-6, 2);
	Point c;
	Point d(b);
	Point e(d); // e is equal to b

	cout << endl;

	a.print();
	b.print();
	c.print();
	d.print();
	e.print();

	system("pause");
	return 0;
}