#include <iostream>
#include <vector>
using namespace std;

class LocationData {
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
	void setNoRows(int* noRows) {
		NoRows = noRows;
	}
	int* getNoRows() {
		return NoRows;
	}
	void setCity(const char* city) {
		City = city;
	}
	const char* getCity() {
		return City;
	}


	LocationData(int maxnoseat, int* norows, const char* city, int nozones) {
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
	void locationValidation() {
		if (NoZones <= 0) {
			std::cout << "The location has no more available seats" << std::endl;
		}
		else {
			std::cout << "The location has available seats" << std::endl;
		}
	}
	
};

class Event {
private:
	string EventName;
	LocationData& Location;
	int Time;
	const char* Date;
public:

	void setEventName(string eventName) {
		EventName = eventName;
	}
	string getName() {
		return EventName;
	}
	void setLocation(const LocationData& location) {
		this-> Location;
	}
	const auto getLocation() {
		return Location;
	}
	void setTime(int time){
		Time = time;
	}
	int getTime() {
		return Time;
	}
	void setDate(const char* date) {
		Date = date;
	}
	const char* getDate() {
		return Date;
	}


	Event(string name, const char* date, int time, LocationData location) :EventName(name), Location(location) {
		EventName = name;
		Time = time;
		Date = date;
		this->Location = location;
	}

	void eventDetails() {
		std::cout << "Name of the event - " << EventName << std::endl;
		std::cout << "The date on which the event takes place - " << Date << std::endl;
		std::cout << "The time when the event starts - " << Time << std::endl;
	}

};

class Ticket {
private:
	string Type;
	const char* EventName;
	int SeatNumber;
	double Price;
	int ticketNumber;

public:
	Ticket(string type, const char* eventName, int seatNumber, double price, int ticketnumber) {
		Type = type;
		Price = price;
		EventName = eventName;
		SeatNumber = seatNumber;
		ticketNumber = ticketnumber;
	}

	void ticketDetails() {
		std::cout << "The ticket is for the event: " << EventName << std::endl;
		std::cout << "The seat number is: " << SeatNumber << std::endl;
		std::cout << "The type of bought ticket is: " << Type << std::endl;
		std::cout << "The price of the ticket is: RON" << Price << std::endl;
	}

	void ticketValidation() {
		if (ticketNumber <= 0) {
			std::cout << "The ticket is invalid" << std::endl;
		}
		else {
			std::cout << "The ticket is valid" << std::endl;
		}
	}
};



