#include <iostream>
using namespace std;

// Node structure 
struct Node {
    int data;
    Node* next;
};

// LinkedList class
class LinkedList {
private:
    Node* head;  // pointer to first node

public:
    LinkedList() {
        head = nullptr;  // start with empty list
    }

    // Insert at end
    void insertAtEnd(int value) {
        Node* newNode = new Node;  // create new node
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Insert at beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node;// new node created
        newNode->data = value;// new node data assigned
        newNode->next = head;//new node's next = address of head which contains the address pointing to the next node
        head = newNode;//head now points to the new node
    }

    // Delete a node by value
    void deleteNode(int value) {
        if (head == nullptr) return;

        // If node to delete is head
        if (head->data == value) {
            Node* temp = head;//create temporary node and pass the previous head address to it
            head = head->next;// now head is equal to the next node pointed to by the previous head
            delete temp;//delete old
            return;
        }

        Node* current = head;
        while (current->next != nullptr && current->next->data != value) {
            current = current->next;
        }

        if (current->next == nullptr) return;  // value not found

        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;
    }

    // Display linked list
    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;

    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    cout << "Linked List: ";
    list.display();

    list.insertAtBeginning(5);
    cout << "After inserting at beginning: ";
    list.display();

    list.deleteNode(20);
    cout << "After deleting 20: ";
    list.display();

    return 0;
}
