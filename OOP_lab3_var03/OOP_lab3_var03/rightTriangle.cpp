#include "RightTriangle.h"
#include <cmath>

RightTriangle:: RightTriangle(){}

RightTriangle:: ~RightTriangle(){}

RightTriangle:: RightTriangle(double side1, double side2){
	setSide1(side1);
	setSide2(side2);
}

double RightTriangle:: area(){
	return getSide1() * getSide2() / 2.0;
}

double RightTriangle:: perimeter(){
	return sqrt(pow(getSide1(), 2) + pow(getSide2(), 2)) + getSide1() + getSide2(); 
}