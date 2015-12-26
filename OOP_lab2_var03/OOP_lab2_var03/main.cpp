#include <iostream>
#include "segment.h"
#include "triangle.h"
#include "prism.h"

using namespace std;

int main() {
	Segment ab(12);
	Segment bc(5);
	Triangle tr(ab, bc);


	system("pause");
	return 0;
}