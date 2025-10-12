#include "linkedlist.h"

List::List(){
    head = nullptr;
}
List::~List(){
    delete head;
}

bool List::IsListEmpty(){
    if(head == nullptr){
        return true;
    }
    else{
        return false;
    }
}
void List::insertafter(int old_value, int new_value){
    Node* temp = head;
    Node* after;
    while(temp->next!=nullptr){
        if(temp->data == old_value){
            after = temp->next;
            break;
        }
        temp = temp->next;
    }
    Node* newnode = new Node;
    newnode->data=new_value;
    newnode->next = after;
    temp->next = newnode;
    
}

void List::deleteNode(int value){
    Node* temp = head;
    Node* prev = nullptr;
    Node* after;
    while(temp!=nullptr){
        
        if(temp->data == value){
            if(temp == head){
                //moving the head onetime ahead
                head = head->next;
                break;
            }
            after = temp->next;
            delete temp;
            
            prev->next = after;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
}

void List::insert_end(int value){
    Node* temp = head;
    if(head == nullptr){
        Node* newnode = new Node;
        newnode->data = value;
        newnode->next = nullptr;
        head = newnode;
        return;
    }
    while(temp->next != nullptr){
        temp = temp->next;
    }
    Node* NewNode = new Node;
    NewNode->data = value;
    NewNode->next = nullptr;
    temp->next = NewNode;
}

void List::insert_begin(int value){
    
    if(head == nullptr){
        Node* newnode = new Node;
        newnode->data = value;
        newnode->next = nullptr;
        head = newnode;
        return;
    }
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}


void List::traverse(){
    Node* temp = head;
    while(temp->next!= nullptr){
        cout << temp->data << endl;
        temp = temp->next;
        if(temp->next == nullptr){
            cout << temp->data << endl;
        }
    }
}

//A function that counts the total number of nodes in the list 
int List::TotalNodes(){
    Node* temp = head;
    int count = 0;
    while(temp!=nullptr){
        count++;
        temp = temp->next;
    }
    return count;
}

int List::NodePosition(int value){
    Node* temp = head;
    int position = 0;
    while(temp!=nullptr){
        if(temp->data == value){
            break;
        }
        temp = temp->next;
        position++;
    }
    return position;
}

void List::SwapPositions(Node* p1, Node* p2){
    Node* temp = p1;
    p1 = p2;
    p2 = temp;
}