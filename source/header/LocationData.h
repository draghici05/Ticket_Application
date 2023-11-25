#define location_h
#include <iostream>
#include <istream>
#include <vector>

class LocationData {
private:
	int MaxNoSeat;
	int* NoRows;
	const char* City;
	int NoZones;
	std::vector<char>* charVector;  
	std::vector<int>* numericVector;
		
public:
	LocationData(int maxnoseat, int* norows, const char* city, int nozones) {
		MaxNoSeat = maxnoseat;
		NoRows = norows;
		City = city;
		NoZones = nozones;
	}

	char* getCity() const;
	int getMaxNoSeat() const;
	int* getNoRows() const;
	int getNoZones() const;
	std::vector<char>* getCharVector() const;
	std::vector<int>* getNumericVector() const;

	void locationDetails();
	void locationValidation();


	friend std::ostream& operator<<(std::ostream& os, const LocationData location);
	friend std::istream& operator>>(std::istream& is, LocationData location);
};



