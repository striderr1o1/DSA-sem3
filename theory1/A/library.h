#ifndef LIBARY_H
#define LIBARY_H

#include <iostream>
#include <string>
using namespace std;

struct Book{
    string title;
    int id;
    string author;
    int YearOfPublication;
    Book* next;
};
class Library{
    private:
    Book* head;
    int count;
    public:
    Library();
    void AddBook(string title, string author, int yop);
    void RemoveBook(int id);
    void Display();
    void SearchBook(string title);

};

#endif