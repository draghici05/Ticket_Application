#include "ProcessFile.h"
#include <iostream>
#include <fstream>

using namespace std;

void ProcessFile(const char* ProiectOOP)
{
	ifstream inputFile(ProiectOOP);
	
	if (!inputFile.is_open()) {
		cout << "Error for: " << ProiectOOP << endl;
		return;
	}

	inputFile.close();
}
