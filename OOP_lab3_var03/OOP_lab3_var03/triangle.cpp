#include "triangle.h"
#include <iostream>

using namespace std;

Triangle::Triangle() {
	side1 = 0;
	side2 = 0;
	angle = 0;
}

Triangle:: ~Triangle() {};

double Triangle::getSide1() {
	return side1;
}

double Triangle::getSide2() {
	return side2;
}

double Triangle::getAngle() {
	return angle;
}

void Triangle::setSide1(double side) {
	side1 = side;
}

void Triangle::setSide2(double side) {
	side2 = side;
}

void Triangle::setAngle(double angle1) {
	if (angle1 <= 0 || angle1 >= 180) {
		cout << "Angle couldn't be aliquot by 180°, it's in range [1..179]" << endl;
	}
	angle = angle1;
}

void Triangle::printInfo() {
	cout << "The area of triangle, S = " << this->area() << endl
		<< "It's perimeter, P = " << this->perimeter() << endl;
}

