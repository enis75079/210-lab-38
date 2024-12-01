/*

lab36: Records BST
COMSC-210
Naveen Islam

*/
#include <iostream>
#include <string>
#include "IntBinaryTree.h"
using namespace std;

int main() {
    IntBinaryTree tree;
    int userChoice = 0;
    string userInput = "";

    while (userChoice != 5) {
        cout << "1. Add Record" << endl;
        cout << "2. Delete Record" << endl;
        cout << "3. Search Record" << endl;
        cout << "4. Modify Record" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> userChoice;

        if (userChoice == 1) {
            cout << "Record to add: ";
            cin >> userInput;
            tree.insertNode(userInput);
        } else if (userChoice == 2) {
            cout << "Record to delete: ";
            cin >> userInput;
            tree.remove(userInput);
        } else if (userChoice == 3) {
            cout << "Record to search: ";
            cin >> userInput;
            if (tree.searchNode(userInput)) {
                cout << "Record found." << endl;
            } else {
                cout << "Record not found." << endl;
            }
        } else if (userChoice == 4) {
            string old;
            string neww;
            cout << "Record to modify: ";
            cin >> old;
            if (tree.searchNode(old)) {
                cout << "New value: ";
                cin >> neww;
                tree.remove(old);
                tree.insertNode(neww);
                cout << "Record has been modified" << endl;
            } else {
                cout << "record not found." << endl;
            }
        } else if (userChoice == 5) {
            cout << "Program terminated." << endl;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}