#include "Date.h"
#include "Event.h"
#include "Location.h"
#include "Ticket.h"
#include "Zone.h"

#include <iostream>
#include <string>


using namespace std;

void Menu() {

	int choice;

	cout << "-------------------------------";
	cout << "-------- Ticketing App --------";
	cout << "-------------------------------";

	do {
		cout << "1.Buy ticket\n 2.Check ticket details\n 3.Modify ticket\n 4.Exit";
		cin >> choice;
		switch (choice) {
		case 0:
			cout << "Select the event: \n";
			break;
		case 1:
			cout << "The details of your ticket: \n";
			break;
		case 2:
			cout << "Select the details that need to be modified: \n";
			break;
		case 3:
			cout << "Exiting the app. \n";
			break;
		}
	}

	while (choice != 0);
}

int main() {
	
	Menu();
}
