#include "library.h"

Library::Library(){
    head = nullptr;
    count = 0;
}
void Library::AddBook(string title, string author, int yop){
    count++;
    if(head == nullptr){
        Book* NewBook = new Book;
        NewBook->author = author;
        NewBook->title = title;
        NewBook->id = count;
        NewBook->YearOfPublication = yop;
        NewBook->next = nullptr;
        head = NewBook;
        return;
    }

    Book* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    Book* NewBook = new Book;
    NewBook->author = author;
    NewBook->title = title;
    NewBook->id = count;
    NewBook->YearOfPublication = yop;
    NewBook->next = nullptr;
    temp->next = NewBook;

}
void Library::RemoveBook(int id){
    
    Book* temp = head;
    Book* tempPrevious = nullptr;
    while(temp->id != id){
        tempPrevious = temp;
        temp = temp->next;
    }
    if(tempPrevious == nullptr){
        head = head->next;
        return;
    }
    tempPrevious->next = temp->next;
    delete temp;
}
void Library::Display(){
    Book* temp = head;
    if(temp == nullptr){
        cout << "----No Books----" << endl;
        return;
    }
    while(temp!=nullptr){
        cout << "########Book-" << temp->id << "########" << endl;
        cout << "Book_ID: " << temp->id << endl;
        cout << "Title: " << temp->title << endl;
        cout << "Author: " << temp->author << endl;
        cout << "Published: " << temp->YearOfPublication << endl;
        temp = temp->next;
    }

}
void Library::SearchBook(string title){
    Book* temp = head;
    
    while(temp->title != title ){
        
        temp = temp->next;
    }
    cout << "########Book-" << temp->id << "########" << endl;
    cout << "Book_ID: " << temp->id << endl;
    cout << "Title: " << temp->title << endl;
    cout << "Author: " << temp->author << endl;
    cout << "Published: " << temp->YearOfPublication << endl;
    
}