#include <iostream>
#include <string>
using namespace std;

string usernames[100], passwords[100];
int userCount = 0;

void registerUser() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;

    // Check if username already exists
    for (int i = 0; i < userCount; i++) {
        if (usernames[i] == username) {
            cout << "Error: Username already taken.\n";
            return;
        }
    }

    cout << "Enter password: ";
    cin >> password;

    usernames[userCount] = username;
    passwords[userCount] = password;
    userCount++;

    cout << "Registration successful\n";
}
void loginUser() {
    string username, password;
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    for (int i = 0; i < userCount; i++) {
        if (usernames[i] == username && passwords[i] == password) {
            cout << "Login successful! Welcome, " << username << "\n";
            return;
        }
    }
    cout << "Error: Invalid username or password.\n";
}

int main() {
    int choice;
    while (true) {
        cout << "\n LOGIN & REGISTRATION SYSTEM\n";
        cout << "1. Register\n2. Login\n3. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: registerUser(); break;
            case 2: loginUser(); break;
            case 3: cout << "Exiting\n";
            default: cout << "Invalid choice! Try again.\n";
             return 0;
           
        }
}

}