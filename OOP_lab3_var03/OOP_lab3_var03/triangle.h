#pragma once
class Triangle{
private:
	double side1;
	double side2;
	double angle;
public:
	double getSide1();
	double getSide2();
	double getAngle();

	void setSide1(double);
	void setSide2(double);
	void setAngle(double);

	Triangle();
	~Triangle();

	virtual double area() = 0;
	virtual double perimeter() = 0;
};

