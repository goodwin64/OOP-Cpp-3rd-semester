#include "rightTriangle.h"
#include <cmath>

rightTriangle:: rightTriangle(){}

rightTriangle:: ~rightTriangle(){}

rightTriangle:: rightTriangle(double side1, double side2){
	setSide1(side1);
	setSide2(side2);
}

double rightTriangle:: area(){
	return getSide1()*getSide2()/2.0;
}

double rightTriangle:: perimeter(){
	return sqrt(pow(getSide1(),2) + pow(getSide2(),2)) + getSide1() + getSide2(); 
}