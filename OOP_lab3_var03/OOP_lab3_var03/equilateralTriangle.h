#pragma once
#include "triangle.h"
class equilateralTriangle : public Triangle{
public:
	equilateralTriangle();
	~equilateralTriangle();
	equilateralTriangle(double);
	double area();
	double perimeter();
};

