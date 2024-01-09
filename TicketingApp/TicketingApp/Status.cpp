#include "Status.h"
#include <iostream>
#include <string>

ExclusiveEvent::ExclusiveEvent(const std::string& name, const std::string& date, const std::string& location, const std::string& exclsuiveLocation)
	:Event(), exclusiveLocation(exclusiveLocation) {

}
std::string ExclusiveEvent:: getExclusiveLocation() const {
	return exclusiveLocation;
}

