#define _CRT_SECURE_NO_WARNINGS // for the correct using of fopen()-function

#include <iostream>
#include "functions.h"

using namespace std;

void ReadFromFile(char *path) {
	FILE *stream;
	char s[100];

	try {
		stream = fopen(path, "rb");
		throw stream;
	}
	catch (FILE *stream) {
		if (stream == NULL) {
			cout << "File not found." << endl;
			return;
		}
	}

	while (!feof(stream)) {
		fgets(s, 100, stream);
		if (!feof(stream)) {
			printf("%s", s);
		}
	}
	printf("%s\n", s); // last row of the file does not read in loop above

	fclose(stream);
}