#pragma once

class Segment {
private:
	int length;
public:
	Segment(int value) {
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

	~Segment() {}
};