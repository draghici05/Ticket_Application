#include "Date.h"
#include "Location.h"

class Event {
private:
	std::string name;
	Date date;
	unsigned int hour;
	unsigned int minute;
	std::string location;

public:
	Event();
	Event(std::string name, Date date, unsigned int hour, unsigned int minute, std::string location);

	std::string getName();
	Date getDate();
	unsigned int getHour();
	unsigned int getMinute();
	Location &getLocation();

	void setName(std::string name);
	void setDate(Date date);
	void setHour(unsigned int hour);
	void setMinute(unsigned int minute);
	void setLocation(std::string location);

	friend std::ostream &operator<<(std::ostream &os, const Event &event);
	friend std::istream &operator>>(std::istream &is, Event &event);
};