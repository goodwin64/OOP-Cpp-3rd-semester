#include "EquilateralTriangle.h"
#include <cmath>

EquilateralTriangle:: ~EquilateralTriangle() {}

EquilateralTriangle::EquilateralTriangle() {}

EquilateralTriangle::EquilateralTriangle(double side1) {
	setSide1(side1);
}

double EquilateralTriangle::area() {
	return sqrt(3.0) * pow(getSide1(), 2.0) / 4.0;
}

double EquilateralTriangle::perimeter() {
	return 3 * getSide1();
}
