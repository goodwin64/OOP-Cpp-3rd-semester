#include "triangle.h"

Triangle:: Triangle(){
	side1 = 0;
	side2 = 0;
	angle = 0;
}

Triangle:: ~Triangle(){};

double Triangle:: getSide1(){
	return side1;
}

double Triangle:: getSide2(){
	return side2;
}

double Triangle:: getAngle(){
	return angle;
}

void Triangle:: setSide1(double side){
	side1 = side;
}

void Triangle:: setSide2(double side){
	side2 = side;
}

void Triangle:: setAngle(double angle1){
	angle = angle1;
}