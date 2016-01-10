#pragma once

class Point {

private:
	double xcord, ycord;

public:
	Point();
	Point(double, double);
	Point(Point &);

	void setCoordinates(double, double);
	double getX();
	double getY();
	void print();

	~Point() {}
};