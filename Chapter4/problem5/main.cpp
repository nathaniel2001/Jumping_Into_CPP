#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main() {

	cout << "THIS WILL NOT WORK, JUST AN EXAMPLE OR WORK IN PROGRESS\n\n";

        string user, search, pass, line;
        int offset;

        ofstream usernames, passwords;
        usernames.open("data/usernames.txt", ios::in|ios::out|ios::app|ios::binary);
        passwords.open("data/passwords.txt", ios::in|ios::out|ios::app|ios::binary);

        usernames.seekp(0, ios::end);
        if (usernames.tellp() == 0) {
                passwords.seekp(0, ios::end);
                if (passwords.tellp() == 0) {
                        cout << "NO USERS REGISTERED\n";
                        cout << "Registering new user...\n\nEnter username: ";
                        getline(cin,user);
                        cout << "Enter password: ";
                        getline(cin,pass);
                        usernames << user;
                        passwords << pass;
                }
                else {
                        cout << "There are users with empty passwords, please fix.\n";
                        return 0;
                }
        }

        cout << "USERNAME: ";
        getline(cin,user);
        cout << "PASSWORD: ";
        getline(cin,pass);

        return 0;
}
