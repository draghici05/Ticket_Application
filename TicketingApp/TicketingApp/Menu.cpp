#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstdlib>

#include "Date.h"
#include "Event.h"
#include "Location.h"
#include "Zone.h"
#include "Ticket.h"
#include "ProcessFile.h"


using namespace std;

Ticket ticket;
Event event;

void saveToFile(vector<Ticket>& tickets, string& ticket_data) {
	ofstream outFile(ticket_data, ios::binary);
	if (!outFile.is_open()) {
		cout << "Error" << endl;
		return;
	}
	for (Ticket& t : tickets) {
		t.saveToFile(outFile);
	}
	outFile.close();
}

void Menu() {
	int choice;
	cout << "-------------------------------\n";
	cout << "-------- Ticketing App --------\n";
	cout << "-------------------------------\n";
	cout << "\n";

	cout << " 1.Buy Ticket \n";
	cout << " 2.Check Ticket \n";
	cout << " 3.Modify Ticket \n";
	cout << " 4.Exit the App \n";
	cout << "\n";

	cout << "-------------------------------\n";
	cout << "Pick an option from the list: ";

	do {
		cin >> choice;
		switch (choice) {
		case 1:
			event.chooseEvent();

			int ticketNumber;
			cin >> ticketNumber;
			cout << "Ticket has been bought. \n";
			if (!(cin >> ticketNumber)) {
				cout << "Invalid input\n";
				cin.clear();
				cin.ignore();
			}
			ticket.buyTicket(event, ticketNumber);
			cout << "The ticket has been bought.";
			break;
		case 2:
			cout << "The details of your ticket: \n";
			ticket.displayTicket();
			break;
		case 3:
			int modify;
			cout << "Select the details that need to be modified: \n";
			cout << "1. Modify Event\n";
			cout << "2. Modify Row\n";
			cout << "3. Modify Date\n";
			cout << "Choose an option: ";
			cin >> modify;

			switch (modify) {
			case 1:
			{
				string newEvent;
				cout << "Enter the new event name: ";
				cin.ignore();
				getline(cin, newEvent);
				ticket.setEvent(newEvent);
				cout << "Event has been modified successfully";
				break;
			}
			case 2:
				int newRow;
				cout << "Enter the new row: ";
				cin >> newRow;
				ticket.setRow(newRow);
				cout << "Row has beed modified successfully";
				break;
			case 3:
				Date newDate;
				cout << "Enter the new date: ";
				cin >> newDate;
				ticket.setTicketDate(newDate);
				cout << "Date has been modified successfully";
				break;
			}
		case 4:
			cout << "Closing the app... \n";
			exit(0);
			break;
		default:
			cout << "Pick an option from the list.";
		}
	}

	while (choice != 4);
}

int main(int argc, char** argv) {

	vector<Ticket> tickets;
	if (argc > 1) {
		ProcessFile(argv[1]);  //Idea from https://stackoverflow.com/questions/3024197/what-does-int-argc-char-argv-mean
	}
	else {
		Menu();
	}

	return 0;
}
