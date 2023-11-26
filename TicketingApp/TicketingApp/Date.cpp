#include "Date.h"
using namespace std;

Date::Date(int day, int month, int year) : day(day), month(month), year(year) {}

int Date::getDay() { return day; }

int Date::getMonth() { return month; }

int Date::getYear() { return year; }

void Date::setDay(int day) {
	if (day > 0 && day <= getDaysInMonth(month, year)) {
		this->day = day;
	} else {
		std::cout << "Invalid day!" << std::endl;
	}
}

void Date::setMonth(int month) {
	if (month > 0 && month <= 12) {
		this->month = month;
	} else {
		std::cout << "Invalid month!" << std::endl;
	}
}

void Date::setYear(int year) {
	if (year > 0) {
		this->year = year;
	} else {
		std::cout << "Invalid year!" << std::endl;
	}
}

void Date::displayDate() {
	std::cout << "Date: " << getDay() << "/" << getMonth() << "/" << getYear()
			  << std::endl;
}

    string Date::getMonthName(int month) {
	switch (month) {
		case 1:
			return "January";
		case 2:
			return "February";
		case 3:
			return "March";
		case 4:
			return "April";
		case 5:
			return "May";
		case 6:
			return "June";
		case 7:
			return "July";
		case 8:
			return "August";
		case 9:
			return "September";
		case 10:
			return "October";
		case 11:
			return "November";
		default:
			return "December";
	}
}

bool Date::isLeapYear(int year) {
	return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}

int Date::getDaysInMonth(int month, int year) {
	switch (month) {
		case 2:
			return isLeapYear(year) ? 29 : 28;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
		default:
			return 31;
	}
}

Date &Date::operator++() {
	if (day == getDaysInMonth(month, year)) {
		day = 1;
		if (month == 12) {
			month = 1;
			year++;
		} else {
			month++;
		}
	} else {
		day++;
	}
	return *this;
}

Date &Date::operator--() {
	if (day == 1) {
		if (month == 1) {
			month = 12;
			year--;
		} else {
			month--;
		}
		day = getDaysInMonth(month, year);
	} else {
		day--;
	}
	return *this;
}

bool Date::operator<(Date &date) {
	if (year < date.getYear()) {
		return true;
	} else if (year == date.getYear()) {
		if (month < date.getMonth()) {
			return true;
		} else if (month == date.getMonth()) {
			return day < date.getDay();
		}
	}
	return false;
}

bool Date::operator>(Date &date) {
	if (year > date.getYear()) {
		return true;
	} else if (year == date.getYear()) {
		if (month > date.getMonth()) {
			return true;
		} else if (month == date.getMonth()) {
			return day > date.getDay();
		}
	}
	return false;
}

bool Date::operator<=(Date &date) {
	if (year < date.getYear()) {
		return true;
	} else if (year == date.getYear()) {
		if (month < date.getMonth()) {
			return true;
		} else if (month == date.getMonth()) {
			return day <= date.getDay();
		}
	}
	return false;
}

bool Date::operator>=(Date &date) {
	if (year > date.getYear()) {
		return true;
	} else if (year == date.getYear()) {
		if (month > date.getMonth()) {
			return true;
		} else if (month == date.getMonth()) {
			return day >= date.getDay();
		}
	}
	return false;
}

bool Date::operator==(Date &date) {
	return day == date.getDay() && month == date.getMonth() &&
		   year == date.getYear();
}

std::ostream &operator<<(std::ostream &out, Date &date) {
	out << "Date: " << date.getDay() << "/" << date.getMonth() << "/"
		<< date.getYear();
	return out;
}

std::istream &operator>>(std::istream &in, Date &date) {
	std::cout << "Day: ";
	in >> date.day;
	std::cout << "Month: ";
	in >> date.month;
	std::cout << "Year: ";
	in >> date.year;
	return in;
}