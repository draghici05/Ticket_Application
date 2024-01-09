#include "ProcessFile.h"
#include <iostream>
#include <fstream>
#include <string>

void ProcessFile::saveToFile(std::vector<Ticket>&ticket, const std::string& ticket_data) {
	std::ofstream outFile(ticket_data, std::ios::binary);
	if (!outFile.is_open()) {
		std::cout << "Error" << std::endl;
		return;
	}
	for (const Ticket& t: ticket) {
		t.saveToFile(outFile);
	}
	outFile.close();

}

void ProcessFile::fileProcess(const std::string& data) {
	
	std::ifstream inputFile(data);

	if (!inputFile.is_open()) {
		std::cout << "Error when opening file" << data << std::endl;
		return;
	}

	std::string line;
	while (std::getline(inputFile, line)){
		std::cout << "Processing line: " << line << std::endl;
	}

	inputFile.close();
}
