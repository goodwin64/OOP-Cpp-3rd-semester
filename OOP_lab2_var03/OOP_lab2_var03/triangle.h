#pragma once

class Triangle {
private:
	Segment mainSide, otherSide;
	float area, perimeter;
public:
	Triangle(Segment side, Segment height) {
		area = 0.5 * side.getLength * height.getLength;
		float otherside = sqrt(pow((side.getLength / 2), 2) + pow(height.getLength, 2)); // sqrt( (b/2) ** 2 + h ** 2 ) 
		perimeter = mainSide.getLength + 2 * otherSide.getLength;
	}
};