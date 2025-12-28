#include "list.h"

List::List(){
    head = nullptr;
}
void List::insertData(int id, string name, int age){
    if(head == nullptr){
        Node* newnode = new Node;
        newnode->age = age;
        newnode->name = name;
        newnode->studID = id;
        newnode->next = nullptr;
        head = newnode;
        return;
    }
    Node* newnode = new Node;
    newnode->age = age;
    newnode->name = name;
    newnode->studID = id;
    newnode->next = nullptr;

    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next = newnode;
    return;

}

void List::searchStudent(string name){
    if(head == nullptr){
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    while(temp != nullptr){
        if(name == temp->name){
            cout << "Name: " << temp->name << endl;
            cout << "Age: " << temp->age << endl;
            cout << "ID: " << temp->studID << endl;
            break;
        }
        temp = temp->next;
    }
    return;
}