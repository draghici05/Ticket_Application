#include "Zone.h"
#include "vector"
#include <string>

using namespace std;

class Location {
private:
	string name;
	vector<Zone> zones;

public:
	Location() = default;
	Location(string name);

	string getName();
	void setName(string name);

	void addZone(Zone zone);
	void removeZone(string name);
	Zone &getZone(string name);

	void clearSeats();
	bool reserveSeat(string zoneName, unsigned int row);

	friend std::ostream &operator<<(std::ostream &out, Location &location);
	friend std::istream &operator>>(std::istream &in, Location &location);
};