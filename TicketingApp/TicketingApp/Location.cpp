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

void Location::addZone(Zone zone) {
	zones.push_back(zone);
}

void Location::removeZone(string name) {
	for (auto it = zones.begin(); it != zones.end(); ++it) {
		if (it->getName() == name) {
			zones.erase(it);
			cout << "Zone: " << name << " removed succesfully " << endl;
			return;
		}
	}
	cout << "Zone " << name << " not found " << endl;
}

Zone& Location::getZone(string name) {
	for (auto& zone : zones) {
		if (zone.getName() == name) {
			return zone;
		}
	}
	cout << "Zone " << name << " not found. Return to the first zone " << endl;
	return zones.front();
}

void Location::clearSeats() {
	for (auto& zone : zones) {
		zone.clearSeats();
	}
}

bool Location::reserveSeat(string zoneName, unsigned int row) {
	for (auto& zone : zones) {
		if (zone.getName() == name) {
			return zone.reserveSeat(row);
		}
	}
	cout << "Zone " << zoneName << " not found " << endl;
	return false;
}

ostream& operator<<(ostream& out, Location& location) {
	out << "Location: " << location.name << endl;
	out << "Zones:" << endl;
	for (auto& zone : location.zones) {
		out << zone << endl;
	}
	return out;
}

istream& operator>>(istream& in, Location& location) {
	cout << "Enter location name: ";
	in >> location.name;
	return in;
}
