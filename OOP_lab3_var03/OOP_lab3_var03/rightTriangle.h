#pragma once
#include "triangle.h"
class rightTriangle : public Triangle{
public:
	rightTriangle();
	~rightTriangle();
	rightTriangle(double, double);
	double area();
	double perimeter();
};

