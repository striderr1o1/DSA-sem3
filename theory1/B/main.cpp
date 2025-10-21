#include <iostream>
#include "tracker.h"
using namespace std;
int main(){
    tracker t;
    t.AddPage("youtube", "https://youtube.com", "3.54-pm");
    t.AddPage("instagram", "https://instagram.com", "4pm");
    t.AddPage("cpp-reference", "https://cppreference.com", "6pm");
    cout << "Displaying all pages: " << endl;
    t.Display();
    cout << endl << endl;
    t.currentPage();
    cout << "previous: " << endl;
    t.prevPage();
    cout << "previous: " << endl;
    t.prevPage();
    cout << "previous: " << endl;
    t.prevPage();

    cout << "next: " << endl;
    t.nextPage();
    cout << "next: " << endl;
    t.nextPage();
    cout << "next: " << endl;
    t.nextPage();
    
}