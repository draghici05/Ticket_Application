#include "string"
#include <vector>

class Zone {
private:
	std::string name;
	
	const unsigned int rows;
	unsigned int seatsPerRow;
	
	std::vector<unsigned int> rowSeats;

public:
	Zone();
	Zone(std::string name, unsigned int rows, unsigned int seatsPerRow);

	std::string getName();
	unsigned int getRows();
	unsigned int getSeatsPerRow();

	void setName(std::string name);
	void setSeatsPerRow(unsigned int seatsPerRow);


	unsigned int operator[](unsigned int row);

	void clearSeats();
	bool reserveSeat(unsigned int row);

	friend std::ostream &operator<<(std::ostream &os, const Zone &zone);
	friend std::istream& operator>>(std::istream &is, const Zone& zone);
};