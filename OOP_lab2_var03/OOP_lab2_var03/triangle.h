#pragma once

class Triangle:public Segment {
private:
	int height; // entered by user
	float area, perimeter;
public:
	Triangle(Segment side, int height):Segment(side.getLength()) {
		cout << "Creating a triangle..." << endl;
		this->height = height;
		area = 0.5 * getLength() * height;
		float rib = sqrt( pow( (getLength() / 2), 2 ) + pow(height, 2) ); // sqrt( (b/2) ** 2 + h ** 2 ) 
		perimeter = getLength() + 2 * rib;
	}

	float getArea() {
		return area;
	}

	float getPerimeter() {
		return perimeter;
	}

	void printIt() {
		cout << "This is a triangle." << endl
			<< "It's perimeter, P = " << getPerimeter() << endl
			<< "It's area, S = " << getArea() << endl;
	}
};