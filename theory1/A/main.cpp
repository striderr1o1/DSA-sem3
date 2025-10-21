#include <iostream>
#include "library.h"
#include <string>
using namespace std;
int main(){
    Library lib;
    while (1)
    {
        cout << endl;
        cout << "Press:" << endl;
    cout << "1- Add book" << endl;
    cout << "2- Delete book" << endl;
    cout << "3- Search book by name" << endl;
    cout << "4- Display Books" << endl;

    int option;
    cout << "Option: "; cin >> option;
string title;
string author;
int yop;
int id;
    switch (option){
        case 1:
        cout << "Enter Title: ";
        cin >> title;
        cout << "Enter author: ";
        cin >> author;
        cout << "Enter Year of Publishing: ";
        cin >> yop;
        cout << endl;
        lib.AddBook(title, author, yop);
        break;
        case 2:
        cout << "Enter ID: ";
        cin >> id;
        lib.RemoveBook(id);
        break;
        case 3:
        cout << "Enter Title: ";
        cin >> title;
        cout << endl;
        lib.SearchBook(title);
        break;
        case 4:
        cout << endl;
        lib.Display();
        break;
    }
        /* code */
    }
    
    
}