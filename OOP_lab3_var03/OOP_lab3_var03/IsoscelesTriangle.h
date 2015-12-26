#pragma once
#include "triangle.h"
class IsoscelesTriangle : public Triangle {
public:
	IsoscelesTriangle();
	~IsoscelesTriangle();
	IsoscelesTriangle(double, double);
	double area();
	double perimeter();
};

