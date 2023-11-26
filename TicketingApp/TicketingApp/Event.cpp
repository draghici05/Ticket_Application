#include "Event.h"
#include "Date.h"
using namespace std;

Event::Event(std::string name, Date date, unsigned int hour, unsigned int minute, std::string location)
	: name(name),
	  date(date),
	  hour(hour),
	  minute(minute),
	  location(location) {}

Event::Event() : name(""), date(Date()), hour(0), minute(0), location("") {}

string Event::getName() {
	return name;
}

Date Event::getDate() {
	return date;
}

unsigned int Event::getHour() {
	return hour;
}

unsigned int Event::getMinute() {
	return minute;
}

Location& Event::getLocation() {
	static Location defaultLocation;
	return defaultLocation;
}

void Event::setName(string name) {
	this->name = name;
}

void Event::setDate(Date date) {
	this->date = date;
}

void Event::setHour(unsigned int hour) {
	this->hour = hour;
}

void Event::setMinute(unsigned int minute) {
	this->minute = minute;
}

void Event::setLocation(string location) {
	this->location = location;
}

std::ostream& operator<<(std::ostream& os, const Event& event) {
	os << "Event Name: " << event.name << "\nDate: " << event.date
		<< "\nTime: " << event.hour << ":" << event.minute
		<< "\nLocation: " << event.location;
	return os;
}