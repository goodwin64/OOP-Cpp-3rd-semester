#pragma once

class Prism :public Triangle {
private:
	int height;
	double area, volume;
public:
	Prism(Triangle tr, int height) :Triangle( tr.getLength(), tr.getHeight() ) {
		cout << "Creating a prism..." << endl << endl;
		this->height = height;
		area = 2 * tr.getArea() + height * tr.getPerimeter();
		volume = tr.getArea() * height;
	}

	double getArea() {
		return area;
	}

	double getVolume() {
		return volume;
	}

	void printIt() {
		cout << "This is a prism." << endl
			<< "It's volume, V = " << getVolume() << endl
			<< "It's area, S = " << getArea() << endl << endl;
	}

	~Prism() {}
};