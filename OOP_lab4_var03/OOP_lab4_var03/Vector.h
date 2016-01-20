#pragma once

#include <initializer_list>

class Vector {
private:
	int size;
	double* arr;
public:
	Vector();
	Vector(int, double*);
	Vector(int);
	Vector(std::initializer_list<double> il);

	~Vector();

	Vector& operator=(Vector &Vec);

	Vector& operator++();
	Vector& operator++(int);
	Vector& operator--();
	Vector& operator--(int);
	
	void randomInput(int, int);
	void print();
	int getSize();
};