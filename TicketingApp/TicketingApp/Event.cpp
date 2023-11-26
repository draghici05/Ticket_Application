#include "Event.h"

Event::Event(std::string name, Date date, unsigned int hour, unsigned int minute, std::string location)
	: name(name),
	  date(date),
	  hour(hour),
	  minute(minute),
	  location(location) {}

Event::Event() : name(""), date(Date()), hour(0), minute(0), location("") {}