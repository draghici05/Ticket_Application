#include "string"
#include <vector>

class Zone {
private:
	std::string name;
	// Number of rows cannot be changed after initialization
	const unsigned int rows;
	unsigned int seatsPerRow;
	// Number of occupied seats for each row
	std::vector<unsigned int> rowSeats;

public:
	Zone();
	Zone(std::string name, unsigned int rows, unsigned int seatsPerRow);

	std::string getName();
	unsigned int getRows();
	unsigned int getSeatsPerRow();

	void setName(std::string name);
	void setSeatsPerRow(unsigned int seatsPerRow);

	// Get the number of occupied seats for a specific row
	unsigned int operator[](unsigned int row);

	void clearSeats();
	bool reserveSeat(unsigned int row);

	friend std::ostream &operator<<(std::ostream &os, const Zone &zone);
};