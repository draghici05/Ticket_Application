#include "Date.h"
#include "Location.h"
using namespace std;

class Event {
private:
	string name;
	Date date;
	unsigned int hour;
	unsigned int minute;
	std::string location;

public:
	Event();
	Event(string name, Date date, unsigned int hour, unsigned int minute, string location);

	string getName();
	Date getDate();
	unsigned int getHour();
	unsigned int getMinute();
	Location &getLocation();

	void setName(string name);
	void setDate(Date date);
	void setHour(unsigned int hour);
	void setMinute(unsigned int minute);
	void setLocation(string location);

	friend std::ostream &operator<<(std::ostream &os, const Event &event);
	friend std::istream &operator>>(std::istream &is, Event &event);
};