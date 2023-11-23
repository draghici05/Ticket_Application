#include <iostream>
using namespace std;

class Location {
private:
	int MaxNoSeat;
	int *NoRows;
	const char* City;
	int NoZones;
public:

	void setMaxNoSeat(int maxNoSeat) {
		MaxNoSeat = maxNoSeat;
	}
	int getMaxNoSeat() {	
		return MaxNoSeat;
	}
	Location(int maxnoseat, int* norows, const char* city, int nozones) {
		MaxNoSeat = maxnoseat;
		NoRows = norows;
		City = city;
		NoZones = nozones;
		
	}

	void locationDetails() {
		std::cout << "The event takes place in: " << City << std::endl;
		std::cout << "The maximum ammount of seats in this location is: " << MaxNoSeat << std::endl;
		std::cout << "The number of rows in this location is: " << NoRows << std::endl;
	}
};

class Event {
private:
	const char* EventName;
	const Location& Location;
	string Time;
	const char* Date;
public:

	void setEventName(const char* eventName) {
		EventName = eventName;
	}
	const char* getName() {
		return EventName;
	}
	void setLocation(const Location& location) {
		Location = location;
	}
	const getLocation() {
		return Location;
	}
	void setTime(string time){
		Time = time;
	}
	string getTime() {
		return Time;
	}
	void setDate(const char* date) {
		Date = date;
	}
	const char* getDate() {
		return Date;
	}


	Event(const char* name, const char* date, string time, const Location location) {
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