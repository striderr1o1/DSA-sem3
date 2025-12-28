#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <string>
using namespace std;

struct Node{
    int studID;
    string name;
    int age;
    Node* next;
};

class List{
    private:
    Node* head;
    public:
    List();
    void insertData(int id, string name, int age);
    void searchStudent(string name);
};

#endif