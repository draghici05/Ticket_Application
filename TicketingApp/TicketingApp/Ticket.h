#include <iostream>
using namespace std;

class Ticket {
private:
	static int nextId;
	const int id;
	string event;
	int row;

public:
	Ticket();
	Ticket(string event, int row);

	int getId();
	string getEvent();
	int getRow();

	void setEvent(string event);
	void setRow(int row);

	void displayTicket();

	friend std::ostream &operator<<(std::ostream &out, Ticket &ticket);
	friend std::istream &operator>>(std::istream &in, Ticket &ticket);
};
