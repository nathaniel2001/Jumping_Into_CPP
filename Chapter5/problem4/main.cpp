#include <iostream>
#include <string>

using namespace std;

int main() {

	string pass, user;
	int auth_tries = 0;

	cout << "Enter username: ";
	cin >> user;
	cout << "Enter password: ";
	cin >> pass;
	auth_tries++;

	while ((user != "user" || pass != "user") && (user != "test" || pass != "test")) {
		auth_tries++;
		cout << "Invalid username and or password.\n";
		cout << "Enter username: ";
		cin >> user;
		cout << "Enter password: ";
		cin >> pass;

		if (auth_tries == 3) {
			cout << "Error: maximum authentication tries reached.\n Exiting...\n";
			return 0;
		}
	}

	cout << "Credentials valid.\n";

	return 0;
}
