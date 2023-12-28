#include <iostream>
#include <string>
#include "Date.h"
#include "Event.h"
#include "Location.h"
#include "Ticket.h"
#include "Zone.h"

using namespace std;

void Menu() {
	int choice;
	cout << "-------------------------------\n";
	cout << "-------- Ticketing App --------\n";
	cout << "-------------------------------\n";

	cout << " 1.Buy Ticket \n";
	cout << " 2.Check Ticket \n";
	cout << " 3.Modify Ticket \n";
	cout << " 4.Exit the App \n";

	do {
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Select the ticket: \n";
			break;
		case 2:
			cout << "The details of your ticket: \n";
			break;
		case 3:
			cout << "Select the details that need to be modified: \n";
			break;
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

int main() {
	
	Menu();
}
