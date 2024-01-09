#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <cstdlib>
//live laugh love
#include "Date.h"
#include "Event.h"
#include "Location.h"
#include "Zone.h"
#include "Ticket.h"
#include "ProcessFile.h"
#include "Menu.h"

using namespace std;

//Could be worse, clearly not the best project but for a person who barely knows any coding it is something	

Ticket ticket;
//Event event;
ProcessFile processFile;

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

void Menu::DisplayMenu() {
	int choice;;

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
		cin.clear();
		cin.ignore();

		switch (choice) {
		case 1:
			event.chooseEvent();
				
			int ticketNumber;
			cin >> ticketNumber;
			cout << "Ticket has been bought.";

			if (!(cin >> ticketNumber)) {
				cout << "Invalid input\n";
			}
			else {
				Ticket ticket;
			}
			ticket.setEvent(event.getName());  
			ticket.setTicketDate(event.getDate());
			ticket.setTicketNumber(ticketNumber);

			ticket.buyTicket(event, ticketNumber);
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
				cout << "Enter the new row: \n";
				cin >> newRow;
				ticket.setRow(newRow);
				cout << "Row has beed modified successfully \n";
				break;
			case 3:
				Date newDate;
				cout << "Enter the new date: \n";
				cin >> newDate;
				ticket.setTicketDate(newDate);
				cout << "Date has been modified successfully \n";
				break;
			}
		case 4:
			cout << "\n Closing the app... \n";
			exit(0);
			break;
		default:
			cout << "\n Pick an option from the list.";
		}
	}

	while (choice != 4);
}

int main(int argc, char** argv) {
	
	Menu menu;
	ProcessFile processFile;
	std::vector<Ticket> ticket;

	processFile.saveToFile(ticket, "output.bin");

	if (argc > 1) {				//Idea from https://stackoverflow.com/questions/3024197/what-does-int-argc-char-argv-mean
		processFile.fileProcess(argv[1]);  
	}
	else {
		menu.DisplayMenu();
	}

	return 0;
}
