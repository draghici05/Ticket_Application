#include <iostream>
using namespace std;

class Location {
public:
	int MaxNoSeat;
	int *NoRows;
	string Zone;

	Location(int maxnoseat, int* norows, string zone) {
		MaxNoSeat = maxnoseat;
		NoRows = norows;
		Zone = zone;
	}

};

class Event {
public:
	string Name;
	string Time;
	string Date;

	void EventPresentation() {
		std::cout << "Name of the event - " << Name << std::endl;
		std::cout << "The date on which the event takes place - " << Date << std::endl;
		std::cout << "The time when the event starts - " << Time << std::endl;
	}

	Event(string name, string date, string time) {
		Name = name;
		Time = time;
		Date = date;
	}

};

class Ticket {
public:
	string Type;
	int Price;

	Ticket(string type, int price) {
		Type = type;
		Price = price;
	}
};


int main() {

	Event event1 = Event("Movie night", "20th February", "10 PM");
	event1.EventPresentation();

}

