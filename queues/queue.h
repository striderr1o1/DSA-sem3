#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;


class queue
{
private:
    int Q[5];
    int front;
    int rear;
public:
    queue();
    void insert(int n);
    void del();
    int arraysize();
    bool checkFull();
    void display();
   
};




#endif