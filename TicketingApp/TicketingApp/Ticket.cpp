#include "Date.h"
#include "Ticket.h"
#include <iostream>
#include <fstream>

using namespace std;

Event event;
int Ticket::nextId = 1;

Ticket::Ticket() : id(nextId++), event(" "), row(0), price(0.0), numberTicket(0) {
	for (int i = 0; i < maxTickets; i++) {
		ticketNumbers[i] = -1;
	}
}

Ticket::Ticket(string event, int row) : id(nextId++), event(event), row(row), price(0.0), numberTicket(0) {
	for (int i = 0; i < maxTickets; i++) {
		ticketNumbers[i] = -1;
	}
}


int Ticket::getId() {
	return id;
}

int Ticket::getRow() {
	return row;
}

Date Ticket::getTicketDate() {
	return ticketDate;
}

void Ticket::setTicketDate(Date date) {
	ticketDate = date;
}

void Ticket::setEvent(string event) {
	this->event = event;
}

void Ticket::setRow(int row) {
	this->row = row;
}


void Ticket::buyTicket(int ticketNumber) {
	this->numberTicket = ticketNumber;
	cout << "Ticket " << ticketNumber << " has been bought succesfully\n";
}

void Ticket::displayTicket() {
	cout << "Ticket ID: " << id << std::endl << "Event: " << event << std::endl << "Row: " << row << std::endl << "Number of Tickets: " << numberTicket << endl;
	for (int i = 0; i < numberTicket; i++) {
		cout << ticketNumbers[i] << " ";
	}
}

void Ticket::saveToFile(ostream& outFile) {
	outFile.write(reinterpret_cast<char*>(this), sizeof(*this));
}

void Ticket::loadFromFile(istream& inFile) {
	inFile.read(reinterpret_cast<char*>(this), sizeof(*this));
}

void Ticket::buyTicket(const Event& event, int ticketNumber) {
	setEvent(event.getName());
	setRow(ticketNumber);
	setTicketDate(event.getDate());
}


std::ostream& operator<<(std::ostream& out, Ticket& ticket) {
	out << "Ticket ID: " << ticket.id << std::endl << "Event: " << ticket.event << std::endl << "Row: " << ticket.row << std::endl << "Number of Tickets: " << ticket.numberTicket << endl;
	for (int i = 0; i < ticket.numberTicket; ++i) {
		out << ticket.ticketNumbers[i] << " ";
	}
	return out;
}

std::istream& operator>>(std::istream& in, Ticket& ticket) {
	std::cout << "Enter event: ";
	in >> ticket.event;
	std::cout << "Enter row: ";
	in >> ticket.row;
	return in;
}
