#include <iostream>
using namespace std;

class Location {

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

	string Name;
	int Time;
	char Date;

	Event(string name, int time, char date) {
		Name = name;
		Time = time;
		Date = date;
	}
};

class Ticket {

	string Type;
	int Price;

	Ticket(string type, int price) {
		Type = type;
		Price = price;
	}
};

