#pragma once
#include <iostream>
#include "Date.h"
#include "Event.h"

using namespace std;

class Ticket {
private:
    static int nextId;
    const int id;
    string event;
    int row;
    float price;

    static const int maxTickets = 5;
    int ticketNumbers[maxTickets];
    int numberTicket;

    Date ticketDate;

public:
    Ticket();
    Ticket(string event, int row);

    void buyTicket(int ticketNumber);

    const int* getTicketNumber();
    int getNumTickets();
    int getId();
    string getEvent();
    int getRow();
    Date getTicketDate();   

    void setTicketDate(Date date);
    void setTicketNumber();
    void setEvent(string event);
    void setRow(int row);

    void buyTicket(const Event& event, int ticketNumber);
    void displayTicket();

    void saveToFile(ostream& outFile);
    void loadFromFile(istream& inFile);

    friend std::ostream& operator<<(std::ostream& out, Ticket& ticket);
    friend std::istream& operator>>(std::istream& in, Ticket& ticket);
};
