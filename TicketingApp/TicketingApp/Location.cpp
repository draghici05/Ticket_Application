#include "Location.h"
#include <iostream>
using namespace std;

Location::Location() : name(name) {}

string Location::getName() {
	return name;
}

void Location::setName(string name) {
	this->name = name;
}

