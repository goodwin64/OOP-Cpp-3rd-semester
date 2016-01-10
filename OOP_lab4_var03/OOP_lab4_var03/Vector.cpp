#include <iostream>
#include <iomanip>	// setw
#include "Vector.h"

using namespace std;

	Vector :: Vector() {
		arr = new double[10];
		size = 10;
	}

	Vector :: Vector(int size, double* arr) {
		this->size = size;
		this->arr = arr;
	}

	Vector :: Vector(int size) {
		arr = new double[size];
		this->size = size;
	}

	Vector :: ~Vector() {
		for (int i = 0; i < size; i++) {
			arr[i] = 0;
		}
		//delete arr; // throwed an exception so I put a loop here instead
	}

	int Vector :: getSize() {
		return size;
	}
	
	void Vector :: print() {
		int i = 0;
		for (i; i < size - 1; i++) {
			cout << setw(5) << arr[i] << ", ";
		}
		i++;
		cout << arr[i] << endl;
	}

	/* ---OVERLOADING--- */

	Vector Vector :: operator=(Vector &V) {
		Vector B(V.getSize(), V.arr);
		return B;
	}

	Vector& Vector :: operator++() {
		// postfix
		for (int i = 0; i < getSize(); i++) {
			arr[i]++;
		}
		return *this;
	}

	Vector& Vector :: operator++(int data) {
		// prefix
		for (int i = 0; i < getSize(); i++) {
			++arr[i];
		}
		return *this;
}	

	Vector& Vector :: operator--() {
		// postfix
		for (int i = 0; i < getSize(); i++) {
			arr[i]--;
		}
		return *this;
	}

	Vector& Vector :: operator--(int data) {
		// prefix
		for (int i = 0; i < getSize(); i++) {
			--arr[i];
		}
		return *this;
	}