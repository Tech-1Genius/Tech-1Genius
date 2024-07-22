#include <iostream>
#include <string>

using namespace std;

int main() {
    int choice;
    string title, author;

    cout << "Library Management System" << endl;
    cout << "1. Add Book" << endl;
    cout << "2. Display Books" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter book title: ";
            cin >> title;
            cout << "Enter book author: ";
            cin >> author;
            cout << "Book added successfully!" << endl;
            break;
        case 2:
            cout << "Book Title: " << title << endl;
            cout << "Book Author: " << author << endl;
            break;
        case 3:
            cout << "Exiting program..." << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
    }

    return 0;
}