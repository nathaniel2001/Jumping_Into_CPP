#include <iostream>
#include <string>

using namespace std;

int main() {

	string pass, user;

	cout << "Enter username: ";
	cin >> user;
	cout << "Enter password: ";
	cin >> pass;

	while ((user != "user" || pass != "user") && (user != "test" || pass != "test")) {
		cout << "Invalid username and or password.\n";
		cout << "Enter username: ";
		cin >> user;
		cout << "Enter password: ";
		cin >> pass;
	}

	cout << "Credentials valid.\n";

	return 0;
}
