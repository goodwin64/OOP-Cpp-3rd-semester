#include <iostream>
#include "segment.h"
#include "triangle.h"
#include "prism.h"

using namespace std;

int main() {
	Segment ab(12);
	Triangle tr(ab, 12);
	//Prism pr(tr, 10);

	ab.printIt();
	tr.printIt();
	
	system("pause");
	return 0;
}