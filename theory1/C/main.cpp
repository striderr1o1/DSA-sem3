#include <iostream>
#include "playlist.h"
using namespace std;
int main(){
    playlist p1;
    while (1)
    {
        cout << "Press:";
    cout << "1- add new track" << endl;
    cout << "2- find track by artist name" << endl;
    cout << "3- next track" << endl;
    cout << "4- previous track" << endl;
    cout << "5- current track" << endl;
    cout << "6- display all" << endl;
    int option;
    cin >> option;
string title, artist, time;
    switch (option){
        case 1:
        cout << "Title: "; cin >> title;
        cout << "Artist: "; cin >> artist;
        cout << "time: "; cin >> time;
        cout << endl;
        p1.AddTrack(title, artist, time);
        break;
        case 2:
        cout << "artist name: "; cin >> artist;
        p1.FindTrack(artist);
        cout << endl;
        break;
        case 3:
        p1.nextTrack();
        cout << endl;
        break;
        case 4:
        p1.prevTrack();
        cout << endl;
        break;
        case 5:
        p1.currentTrack();
        cout << endl;
        break;
        case 6:
        p1.Display();
        break;
    }
        /* code */
    }
    
}