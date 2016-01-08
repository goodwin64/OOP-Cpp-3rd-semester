#pragma once

#include <iostream>

using namespace std;

class Segment {
protected:
	int length;
public:
	Segment() {}
	Segment(int value) {
		cout << "Creating a segment..." << endl;
		length = value;
	}

	void setLength(int value) {
		if (value > 0) {
			length = value;
		}
	}

	int getLength() {
		return length;
	}

	void printIt() {
		cout << "This is a segment." << endl
			<< "It's length, L = " << getLength() << endl << endl;
	}

	~Segment() {}
};