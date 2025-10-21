#ifndef TRACKER_H
#define TRACKER_H
#include <iostream>
using namespace std;

struct webpage{
    string title;
    string url;
    string timestamp;
    webpage* prev;
    webpage* next;

};

class tracker
{
private:
    webpage* head;
    webpage* tail;
    webpage* current;
public:
    tracker();
    void AddPage(string title, string url, string tstamp);
    void Display();
    void prevPage();
    void nextPage();
    void currentPage();
    
};




#endif