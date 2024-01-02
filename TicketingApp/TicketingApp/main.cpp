#include <iostream>
#include <string>
#include "Date.h"
#include "Event.h"
#include "Location.h"
#include "Zone.h"
#include "Ticket.h"

using namespace std;

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
			int ticketNumber;
			cout << "Enter the ticket number: \n";
			cin >> ticketNumber;
			cout << "Ticket has been bought. \n";
			break;
		case 2:
			cout << "The details of your ticket: \n";
			ticket.displayTicket;
			break;
		case 3:
			int modify;
			cout << "Select the details that need to be modified: \n";
			cout << "1. Modify Event\n";
			cout << "2. Modify Row\n";
			cout << "3. Modify Date\n";
			cout << "Choose an option: ";
			cin >> modify;
			
			switch(modify) {
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
	Ticket ticket;
	Menu();
	return 0;
}
