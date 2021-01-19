#include <iostream>
#include <string>

using namespace std;

string pass, user;
int auth_tries = 0;

void auth_check() {
	while ((user != "user" || pass != "user") && (user != "test" || pass != "test")) {
		cout << "Invalid username and or password.\n";
		cout << "Enter username: ";
		cin >> user;
		cout << "Enter password: ";
		cin >> pass;
		auth_tries++;
		if (auth_tries == 3) {
			break;
		}
	}
}

int main() {

	cout << "Enter username: ";
	cin >> user;
	cout << "Enter password: ";
	cin >> pass;
	auth_tries++;
	auth_check();
	if (auth_tries == 3) {
		cout << "Maximum attempts reached, please restart.\n";
		return 0;
	} else {
		cout << "Credentials valid.\n";
	}
	return 0;
}
