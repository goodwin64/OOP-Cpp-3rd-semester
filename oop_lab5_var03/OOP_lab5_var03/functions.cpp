#include <iostream>
#include "functions.h"
#include <string>
#include <vector>

using namespace std;

void ReadFromFile(char *path) {
	FILE *stream = NULL;
	char s[100];
	string str(path);
	// black_extensions: ext-s which are not able to read
	vector <string> black_extensions = { "exe" , "ilk", "pdb" };

	try {
		string ext = str.substr(str.find_last_of(".") + 1);
		for (auto i : black_extensions) {
			if (i == ext) {
				throw path;
			}
		}
		try {
			fopen_s(&stream, path, "rb");
			if (stream == NULL) {
				throw stream;
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
		catch (FILE *stream) {
			cout << "File not found." << endl;
		}
	}
	catch (char *path) {
		cout << "File couldn't been read." << endl;
	}
}