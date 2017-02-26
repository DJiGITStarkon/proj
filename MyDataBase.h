#ifndef MYDATABASE_H_INCLUDED
#define MYDATABASE_H_INCLUDED

#include "transport.h"
#include "stop.h"
class Main
{
    public:
    unsigned short busNumber;
    unsigned short trolleybusNumber;
    unsigned short tramNumber;
    unsigned short stopsNumber;
    ifstream fin;
    ofstream fout;

    public:
        Main():transNumber(0),stopsNumber(0) {}
    public:
    void menu();

    void add_removeTrans();
    void add_removeStops();
    void showTrans();
    void showStops();

    void addTrans();
    void removeTrans();
    void addStops();
    void removeStops();
    void connect();

    void run();
    void Exit();
};

#endif // MYDATABASE_H_INCLUDED
