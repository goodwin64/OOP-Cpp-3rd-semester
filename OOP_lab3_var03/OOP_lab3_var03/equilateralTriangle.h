#pragma once
#include "triangle.h"

class EquilateralTriangle : public Triangle {
public:
	EquilateralTriangle();
	~EquilateralTriangle();
	EquilateralTriangle(double);
	double area();
	double perimeter();
};
