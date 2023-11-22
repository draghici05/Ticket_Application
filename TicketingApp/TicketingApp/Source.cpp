#include <iostream>
using namespace std;

class Location {
public:
	int MaxNoSeat;
	int *NoRows;
	const char* City;
	
	Location(int maxnoseat, int* norows, const char* city) {
		MaxNoSeat = maxnoseat;
		NoRows = norows;
		City = city;
		
	}

	void locationDetails() {
		std::cout << "The event takes place in: " << City << std::endl;
		std::cout << "The maximum ammount of seats in this location is: " << MaxNoSeat << std::endl;
		std::cout << "The number of rows in this location is: " << NoRows << std::endl;
	}
};

class Event {
public:
	const char* EventName;
	const Location& location;
	string Time;
	const char* Date;


	Event(const char* name, const char* date, string time, const Location& location) {
		EventName = name;
		Time = time;
		Date = date;
		Location = location;
	}

	void eventPresentation() {
		std::cout << "Name of the event - " << EventName << std::endl;
		std::cout << "The date on which the event takes place - " << Date << std::endl;
		std::cout << "The time when the event starts - " << Time << std::endl;
	}

};

class Ticket {
public:
	string Type;
	const char* EventName;
	int SeatNumber;
	double Price;

	Ticket(string type, const char* eventName, int seatNumber, double price) {
		Type = type;
		Price = price;
		EventName = eventName;
		SeatNumber = seatNumber;
	}

	void ticketDetails() {
		std::cout << "The ticket is for the event: " << EventName << std::endl;
		std::cout << "The seat number is: " << SeatNumber << std::endl;
		std::cout << "The type of bought ticket is: " << Type << std::endl;
		std::cout << "The price of the ticket is: RON" << Price << std::endl;
	}
};