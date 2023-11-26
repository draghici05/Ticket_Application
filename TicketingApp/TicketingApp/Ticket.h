#include <iostream>
using namespace std;

class Ticket {
private:
	static int nextId;
	const int id;
	std::string event;
	int row;

public:
	Ticket();
	Ticket(std::string event, int row);

	int getId();
	std::string getEvent();
	int getRow();

	void setEvent(std::string event);
	void setRow(int row);

	void displayTicket();

	friend std::ostream &operator<<(std::ostream &out, Ticket &ticket);
	friend std::istream &operator>>(std::istream &in, Ticket &ticket);
};
