#pragma once

class Vector {
private:
	int size;
	double* arr;
public:
	Vector();
	Vector(int, double*);
	Vector(int);

	~Vector();

	Vector operator=(Vector &Vec);

	Vector& operator++();
	Vector& operator++(int);
	Vector& operator--();
	Vector& operator--(int);
	
	void print();
	int getSize();
};