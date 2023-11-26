#include "string"
#include <vector>
using namespace std;

class Zone {
private:
	string name;
	
	const unsigned int rows;
	unsigned int seatsPerRow;
	
	vector<unsigned int> rowSeats;

public:
	Zone();
	Zone(string name, unsigned int rows, unsigned int seatsPerRow);

	string getName();
	unsigned int getRows();
	unsigned int getSeatsPerRow();

	void setName(string name);
	void setSeatsPerRow(unsigned int seatsPerRow);


	unsigned int operator[](unsigned int row);

	void clearSeats();
	bool reserveSeat(unsigned int row);

	friend std::ostream &operator<<(std::ostream &os, const Zone &zone);
	friend std::istream& operator>>(std::istream &is, const Zone& zone);
};