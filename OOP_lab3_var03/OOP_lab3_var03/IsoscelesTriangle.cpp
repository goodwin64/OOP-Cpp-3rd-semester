#define _USE_MATH_DEFINES

#include "IsoscelesTriangle.h"
#include <cmath>
#include <iostream>
using namespace std;

IsoscelesTriangle:: ~IsoscelesTriangle() {}

IsoscelesTriangle::IsoscelesTriangle() {}

IsoscelesTriangle::IsoscelesTriangle(double side1, double side2) {
	if (side1 * 2 > side2) {
		setSide1(side1); // ribs
		setSide2(side2); // base
	}
	else {
		cout << endl << "\t!!! WARNING !!!" << endl
			<< "\tSum of ribs couldn't be less than base!" << endl << endl;
	}
}

double IsoscelesTriangle::area() {
	double edge = getSide1(),
		halfBase = getSide2() / 2,
		height = sqrt( pow(edge, 2) - pow(halfBase, 2) );

	this->setAngle( asin(height / edge) * M_PI / 180); // angle between rib and base

	return height * halfBase;
}

double IsoscelesTriangle::perimeter() {
	return 2 * getSide1() + getSide2();
}

