#pragma once
#include "triangle.h"
class RightTriangle : public Triangle {
public:
	RightTriangle();
	~RightTriangle();
	RightTriangle(double, double);
	double area();
	double perimeter();
};

