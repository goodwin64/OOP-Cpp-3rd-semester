#include "equilateralTriangle.h"
#include <cmath>

equilateralTriangle:: ~equilateralTriangle(){
}

equilateralTriangle:: equilateralTriangle(){}

equilateralTriangle:: equilateralTriangle(double side1){
	setSide1(side1);
}

double equilateralTriangle:: area(){
	return sqrt(3.0) * pow(getSide1(), 2.0) / 4.0;
}

double equilateralTriangle:: perimeter(){
	return 3 * getSide1(); 
}
