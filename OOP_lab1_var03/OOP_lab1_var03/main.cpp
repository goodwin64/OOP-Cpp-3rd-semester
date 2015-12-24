#include "stdio.h"
#include <cstdio>
#include <iostream>
#include <iomanip>

using namespace std;

class Point {

private:
	int xcord, ycord;

public:
	Point(int x = 10, int y = 10) {
		xcord = x;
		ycord = y;
		if (x != 10 && y != 10) {
			printf("A point with coordinates (%d,%d) was created.\n", xcord, ycord);
			//cout << "A point with coordinates (" << setw(2) << xcord << "," << ycord << ") was created." << endl;
		}
		else {
			printf("A point with default coordinates (10,10) was created.\n");
		}
	}

	Point(Point &otherPoint) {
		xcord = -1 * otherPoint.getX();
		ycord = -1 * otherPoint.getY();
		printf("A symmetric point to (%d,%d) was created. It has coordinates (%d,%d).\n", otherPoint.getX(), otherPoint.getY(), xcord, ycord);
	}

	void setCoordinates(int x, int y) {
		xcord = x;
		ycord = y;
	}

	int getX() {
		return xcord;
	}

	int getY() {
		return ycord;
	}

	void print() {
		//printf("Some point with coordinates (%d,%d).\n", xcord, ycord);
		cout << "Some point with coordinates (" << setw(3) << xcord << "," << setw(3) << ycord << ")." << endl;
	}

	~Point() {}
};

int main() {
	class Point a(1, 13);
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