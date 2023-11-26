#include <iostream>
#include <string>
using namespace std;

class Date {
private:
	int day = 1;
	int month = 1;
	int year = 1970;

public:
	Date() = default;
	Date(int day, int month, int year);

	int getDay();
	int getMonth();
	int getYear();

	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);

	void displayDate();

	static string getMonthName(int month);
	static bool isLeapYear(int year);
	static int getDaysInMonth(int month, int year);

	Date &operator++();
	Date &operator--();

	bool operator<(Date &date);
	bool operator>(Date &date);
	bool operator<=(Date &date);
	bool operator>=(Date &date);
	bool operator==(Date &date);

	operator std::string();

	friend std::ostream &operator<<(std::ostream &out, Date &date);
	friend std::istream &operator>>(std::istream &in, Date &date);
};