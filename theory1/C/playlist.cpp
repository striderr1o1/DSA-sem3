#include "playlist.h"

playlist::playlist()
{
    head = nullptr;
    tail = nullptr;
    current = nullptr;
}
void playlist::AddTrack(string title, string artist, string tstamp){
    if(head == nullptr){
        track* newtrack = new track;
        newtrack->title = title;
        newtrack->artist = artist;
        newtrack->timestamp = tstamp;
        newtrack->prev = nullptr;
        newtrack->next = nullptr;
        head = newtrack;
        current = newtrack;
        tail = newtrack;
        return;
    }
    track* temp = head;
    while (temp->next!= nullptr)
    {
        
        temp = temp->next;
    }
    
    track* newtrack = new track;
    newtrack->title = title;
    newtrack->artist = artist;
    newtrack->timestamp = tstamp;
    newtrack->prev = temp;
    newtrack->next = nullptr;
    temp->next = newtrack;
    tail = newtrack;
    current = tail;
    
}
void playlist::Display(){
    track* temp = tail;
    
    while(temp!=nullptr){
        
        cout << "Name: " << temp->title << endl;
        cout << "Artist: " << temp->artist << endl;
        cout << "time: " << temp->timestamp << endl << endl;
        temp = temp->prev;
    }
}
void playlist::prevTrack(){
    if(current == head){
        cout << "No previous track" << endl;
        return;
    }
    current = current->prev;
    cout << "Name: " << current->title << endl;
    cout << "Artist: " << current->artist << endl;
    cout << "time: " << current->timestamp << endl << endl;
}
void playlist::nextTrack(){
    if(current == tail){
        cout << "No new tracks" << endl;
        return;
    }
    current = current->next;
    cout << "Name: " << current->title << endl;
    cout << "Artist: " << current->artist << endl;
    cout << "time: " << current->timestamp << endl << endl;

}
void playlist::currentTrack(){
    cout << "Name: " << current->title << endl;
    cout << "Artist: " << current->artist << endl;
    cout << "time: " << current->timestamp << endl << endl;
}
void playlist::FindTrack(string s){
    track* temp = head;
    while(temp->title != s){
        temp = temp->next;
        if(temp == nullptr){
            cout << "Not found" << endl;
            break;
        }
    }
    cout << "Name: " << temp->title << endl;
    cout << "Artist: " << temp->artist << endl;
    cout << "time: " << temp->timestamp << endl << endl;
}