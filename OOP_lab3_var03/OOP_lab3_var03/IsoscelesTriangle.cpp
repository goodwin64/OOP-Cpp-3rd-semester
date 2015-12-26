#include "IsoscelesTriangle.h"
#include <cmath>
#include<iostream>
using namespace std;

IsoscelesTriangle:: ~IsoscelesTriangle(){}

IsoscelesTriangle:: IsoscelesTriangle(){}

IsoscelesTriangle:: IsoscelesTriangle(double side1, double side2, double angle) {
	setSide1(side1);
	setSide2(side2);
	setAngle(angle);
}

double IsoscelesTriangle:: area(){
	return (getSide1()*getSide2()*sin(getAngle()*3.1415926535897932384626433832795/180))/2.0;
}

double IsoscelesTriangle:: perimeter(){
	return 2 * getSide1() + getSide2(); 
}

