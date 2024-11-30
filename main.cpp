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
            cin  
        }
    }

    return 0;
}