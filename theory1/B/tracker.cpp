#include "tracker.h"

tracker::tracker()
{
    head = nullptr;
    tail = nullptr;
    current = nullptr;
}
void tracker::AddPage(string title, string url, string tstamp){
    if(head == nullptr){
        webpage* newpage = new webpage;
        newpage->title = title;
        newpage->url = url;
        newpage->timestamp = tstamp;
        newpage->prev = nullptr;
        newpage->next = nullptr;
        head = newpage;
        current = newpage;
        tail = newpage;
        return;
    }
    webpage* temp = head;
    while (temp->next!= nullptr)
    {
        
        temp = temp->next;
    }
    
    webpage* newpage = new webpage;
    newpage->title = title;
    newpage->url = url;
    newpage->timestamp = tstamp;
    newpage->prev = temp;
    newpage->next = nullptr;
    temp->next = newpage;
    tail = newpage;
    current = tail;
    
}
void tracker::Display(){
    webpage* temp = tail;
    int i = 0;
    while(temp!=nullptr){
        cout << "Page" << ++i << endl;
        cout << "Name: " << temp->title << endl;
        cout << "URL: " << temp->url << endl;
        cout << "time: " << temp->timestamp << endl << endl;
        temp = temp->prev;
    }
}
void tracker::prevPage(){
    if(current == head){
        cout << "No previous page" << endl;
        return;
    }
    current = current->prev;
    cout << "Name: " << current->title << endl;
    cout << "URL: " << current->url << endl;
    cout << "time: " << current->timestamp << endl << endl;
}
void tracker::nextPage(){
    if(current == tail){
        cout << "No new pages visited" << endl;
        return;
    }
    current = current->next;
    cout << "Name: " << current->title << endl;
    cout << "URL: " << current->url << endl;
    cout << "time: " << current->timestamp << endl << endl;

}
void tracker::currentPage(){
    cout << "Name: " << current->title << endl;
    cout << "URL: " << current->url << endl;
    cout << "time: " << current->timestamp << endl << endl;
}