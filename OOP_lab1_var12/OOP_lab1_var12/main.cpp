#include <iostream>

using namespace std;

class Rect {
private: 
	float a, b;
public:
	Rect(float width, float height) {
		a = width;
		b = height;
	}

	Rect(Rect &other) {
		float diag = sqrt(pow(other.getWidth(), 2) + pow(other.getHeight(), 2));
		a = diag; // private "a" gets a value "diag"
		b = diag;
	}

	float getWidth() {
		return a;
	}

	float getHeight() {
		return b;
	}

	void print() {
		if (a == b) {
			cout << "Square with side=" << a << endl;
		}
		else {
			cout << "Rectangle with width=" << a << " and height=" << b << endl;
		}
	}

	~Rect() {}
};

int main() {
	Rect A(12, 3);
	Rect B(A);
	A.print();
	B.print();

	system("pause");
	return 0;
}