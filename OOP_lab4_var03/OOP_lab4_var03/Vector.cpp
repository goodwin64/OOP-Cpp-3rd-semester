#include <iostream>
#include <iomanip>	// setw
#include <cstdlib>
#include "Vector.h"


using namespace std;

	Vector :: Vector() {
		arr = new double[10];
		size = 10;
	}

	Vector :: Vector(int size, double* arr) {
		this->size = size;
		this->arr = new double[size];
		for (int i = 0; i < size; i++) {
			this->arr[i] = arr[i];
		}
	}

	Vector :: Vector(int size) {
		arr = new double[size];
		this->size = size;
	}

	Vector :: Vector(initializer_list<double> il) {
		arr = new double[il.size()];
		size = il.size();
		int j = 0;
		for (auto i : il) {
			arr[j++] = i;
		}
	}

	int Vector :: getSize() {
		return size;
	}
	
	void Vector :: print() {
		int i = 0;
		for (i; i < size - 1; i++) {
			cout << arr[i] << ", ";
		}
		cout << arr[i] << endl;
	}

	void Vector :: randomInput(int min, int max) {
		srand(time(NULL));
		for (int i = 0; i < size; i++) {
			this->arr[i] = min + (rand() % (max - min + 1));
		}
	}

	/* ---OVERLOADING--- */

	Vector& Vector :: operator=(Vector &V) {
		delete[] arr;
		this->arr = new double[V.getSize()];
		for (int i = 0; i < V.getSize(); i++) {
			this->arr[i] = V.arr[i];
			this->size = V.size;
		}
		return V;
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

	Vector :: ~Vector() {
		delete [] arr;
	}