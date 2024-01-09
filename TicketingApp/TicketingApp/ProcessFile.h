#pragma once

#ifndef PROCESSFILE_H
#define PROCESSFILE_H

#include <iostream>
#include <string>
#include <vector>
#include "Ticket.h"

class ProcessFile {

public:
	void saveToFile(std::vector<Ticket>& ticket, const std::string& ticket_data);
	void fileProcess(const std::string& data);
};

#endif // PROCESSFILE_H
