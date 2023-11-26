#include "Location.h"
#include <iostream>
using namespace std;

Location::Location() : name(nullptr) {}

string Location::getName() {
	return name;
}

void Location::setName(string name) {
	this->name = name;
}

