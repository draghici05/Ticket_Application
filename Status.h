#pragma once

#ifndef STATUS_H
#define STATUS_H

#include "Event.h"
#include <string>

class ExclusiveEvent : public Event {
private:
	std::string exclusiveLocation;

public:
	ExclusiveEvent(const std::string& name, const std::string& date, const std::string& location, const std::string& exclusiveLocation);
	std::string getExclusiveLocation() const;
};

#endif // STATUS_H