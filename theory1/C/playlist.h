#ifndef PLAYLIST_H
#define PLAYLIST_H
#include <iostream>
using namespace std;

struct track{
    string title;
    string artist;
    string timestamp;
    track* prev;
    track* next;

};

class playlist
{
private:
    track* head;
    track* tail;
    track* current;
public:
    playlist();
    void AddTrack(string title, string artist, string tstamp);
    void Display();
    void prevTrack();
    void nextTrack();
    void currentTrack();
    void FindTrack(string name);
};




#endif