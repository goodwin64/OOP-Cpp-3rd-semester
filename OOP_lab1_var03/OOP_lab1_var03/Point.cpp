#include "Point.h"
#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

Point::Point() {
	xcord = 10;
	ycord = 10;
	printf("A point with default coordinates (10,10) was created.\n");
}

Point::Point(double x, double y) {
	xcord = x;
	ycord = y;
	printf("A point with coordinates (%5.1f,%5.1f) was created.\n", xcord, ycord);
	//cout << "A point with coordinates (" << setw(2) << xcord << "," << ycord << ") was created." << endl;
}

Point::Point(Point &otherPoint) {
	xcord = -1 * otherPoint.getX();
	ycord = -1 * otherPoint.getY();
	// <printf> below is more elegant than <cout>
	printf("A symmetric point to (%4.1f,%4.1f) was created. It has coordinates (%4.1f,%4.1f).\n", otherPoint.getX(), otherPoint.getY(), this->getX(), this->getY());
	/*
	cout 
		<< "A symmetric point to (" 
		<< otherPoint.getX() 
		<< "," 
		<< otherPoint.getY() 
		<< ") was created. It has coordinates (" 
		<< xcord 
		<< "," 
		<< ycord 
		<< ")." 
		<< endl;
		*/
}

void Point::setCoordinates(double x, double y) {
	if (x != xcord || y != ycord) {
		xcord = x;
		ycord = y;
	}
	else {
		// ignore
		cout << "You're going to assign current values" << endl;
	}
}

double Point::getX() {
	return xcord;
}

double Point::getY() {
	return ycord;
}

void Point::print() {
	//printf("Some point with coordinates (%d,%d).\n", xcord, ycord);
	// another kind of output the Point - via <cout> and private members (instead of printf & get-methods)
	cout << "Some point with coordinates (" << setw(3) << xcord << "," << setw(3) << ycord << ")." << endl;
}