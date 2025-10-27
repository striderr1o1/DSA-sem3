#include <iostream>
#include "multistruct.h"
using namespace std;

void displayMenu() {
    cout << "\n========== Custom Data Structure Simulator ==========" << endl;
    cout << "0. What is MultiStruct?" << endl;
    cout << "1. Set Mode (Stack/Queue/Priority Queue)" << endl;
    cout << "2. Push/Insert Element" << endl;
    cout << "3. Pop/Remove Element" << endl;
    cout << "4. Display Data Structure" << endl;
    cout << "5. Exit" << endl;
    cout << "=====================================================" << endl;
    cout << "Enter your choice: ";
}

void displayModeMenu() {
    cout << "\n--- Select Data Structure Mode ---" << endl;
    cout << "0. Stack (LIFO)" << endl;
    cout << "1. Queue (FIFO)" << endl;
    cout << "2. Priority Queue" << endl;
    cout << "Enter mode (0-2): ";
}

string getModeName(int mode) {
    switch(mode) {
        case 0: return "Stack";
        case 1: return "Queue";
        case 2: return "Priority Queue";
        default: return "Unknown";
    }
}

int main(){
    MultiStruct ds;
    int choice;
    int currentMode = 0; // Default mode is Stack
    bool running = true;
    
    cout << "\n***** Welcome to Multi-struct *****\n" << endl;
    cout << "Default mode: Stack (LIFO)" << endl;
    
    while(running) {
        cout << "\nCurrent Mode: " << getModeName(currentMode) << endl;
        displayMenu();
        cin >> choice;
        
        // Check for invalid input
        if(cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "\nInvalid input! Please enter a number." << endl;
            continue;
        }
        
        switch(choice) {
            case 0: {
                cout << "\nMulti-struct is a built on top of doubly linked-lists.\nIt has the following operations:\n- Stack\n- Queue\n- Priority Queue\n";
                break;
            }
            case 1: { // Set Mode
                displayModeMenu();
                int mode;
                cin >> mode;
                
                if(cin.fail()) {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "\nInvalid input!" << endl;
                    break;
                }
                
                if(mode >= 0 && mode <= 2) {
                    ds.SetMode(mode);
                    currentMode = mode;
                    cout << "\nMode changed to: " << getModeName(currentMode) << endl;
                } else {
                    cout << "\nInvalid mode! Please select 0, 1, or 2." << endl;
                }
                break;
            }
            
            case 2: { // Push/Insert
                int value;
                cout << "\nEnter value to insert: ";
                cin >> value;
                
                if(cin.fail()) {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "\nInvalid input!" << endl;
                    break;
                }
                
                ds.insert(value);
                cout << "\nValue " << value << " inserted successfully into " 
                     << getModeName(currentMode) << "!" << endl;
                break;
            }
            
            case 3: { // Pop/Remove
                cout << "\nRemoving element from " << getModeName(currentMode) << "..." << endl;
                ds.pop();
                break;
            }
            
            case 4: { // Display
                cout << "\n--- Displaying " << getModeName(currentMode) << " ---" << endl;
                ds.display();
                cout << "--- End of Display ---" << endl;
                break;
            }
            
            case 5: { // Exit
                cout << "\nExiting simulator. Goodbye!" << endl;
                running = false;
                break;
            }
            
            default:
                cout << "\nInvalid choice! Please select 1-5." << endl;
                break;
        }
    }
    
    return 0;
}