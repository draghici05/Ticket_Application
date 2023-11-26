#include "Ticket.h";
#include <iostream>

using namespace std;

int Ticket::nextId = 1;

Ticket::Ticket(): id(nextId++) {}

Ticket::Ticket(string event, int row) : id(nextId++), event(event), row(row) {}

int Ticket::getId() {
	return id;
}

int Ticket::getRow() {
	return row;
}

void Ticket::setEvent(string event) {
	this->event = event;
}

void Ticket::setRow(int row) {
	this->row = row;
}

void Ticket::displayTicket() {
	cout << "Ticket ID: " << id << std::endl << "Event: " << event << std::endl << "Row: " << row << std::endl;
}


std::ostream& operator<<(std::ostream& out, Ticket& ticket) {
	out << "Ticket ID: " << ticket.id << std::endl << "Event: " << ticket.event << std::endl << "Row: " << ticket.row << std::endl;
	return out;
}

std::istream& operator>>(std::istream& in, Ticket& ticket) {
	std::cout << "Enter event: ";
	in >> ticket.event;
	std::cout << "Enter row: ";
	in >> ticket.row;
	return in;
}