#include "Zone.h"
#include "vector"
#include <string>


class Location {
private:
	std::string name;
	std::vector<Zone> zones;

public:
	Location() = default;
	Location(std::string name);

	std::string getName();
	void setName(std::string name);

	void addZone(Zone zone);
	void removeZone(std::string name);
	Zone &getZone(std::string name);

	void clearSeats();
	bool reserveSeat(std::string zoneName, unsigned int row);

	friend std::ostream &operator<<(std::ostream &out, Location &location);
	friend std::istream &operator>>(std::istream &in, Location &location);
};