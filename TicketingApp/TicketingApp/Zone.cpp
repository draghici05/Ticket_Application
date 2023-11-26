#include "Zone.h"
#include "iostream"
using namespace std;

Zone::Zone() : rows(1), seatsPerRow(1) {
	rowSeats.resize(rows);
}

Zone::Zone(string name, unsigned int rows, unsigned int seatsPerRow) : name(name), rows(rows), seatsPerRow(seatsPerRow) {
	rowSeats.resize(rows);
}

std::string Zone::getName() {
	return name;
}

unsigned int Zone::getRows() {
	return rows;
}

unsigned int Zone::getSeatsPerRow() {
	return seatsPerRow;
}

void Zone::setName(std::string name) {
	this->name = name;
}

void Zone::setSeatsPerRow(unsigned int seatsPerRow) {
	
	for (auto &row: rowSeats) {
		if (row > seatsPerRow) {
			std::cout << "Not enough seats in row " << &row - &rowSeats[0] << "!" << std::endl;
			return;
		}
	}
	this->seatsPerRow = seatsPerRow;
}

unsigned int Zone::operator[](unsigned int row) {
	return rowSeats[row];
}

void Zone::clearSeats() {
	for (auto &row: rowSeats) {
		row = 0;
	}
}

bool Zone::reserveSeat(unsigned int row) {
	if (row < rows) {
		if (rowSeats[row] < seatsPerRow) {
			rowSeats[row]++;
			return true;
		} else {
			std::cout << "No more seats in row " << row << "!" << std::endl;
			return false;
		}
	} else {
		std::cout << "Invalid row!" << std::endl;
		return false;
	}
}

std::ostream &operator<<(ostream &os, const Zone &zone) {
	os << "Zone: " << zone.name << std::endl;
	os << "Rows: " << zone.rows << std::endl;
	os << "Seats per row: " << zone.seatsPerRow << std::endl;
	os << "Occupied seats per row: ";
	for (auto &row: zone.rowSeats) {
		os << row << " ";
	}
	os << std::endl;
	return os;
}

std::istream& operator>>(std::istream& is, const Zone& zone)
{
	cout << "Enter zone name: ";
	


}
