#include <iostream>
#include <string>

using namespace std;

int main() {

	string pass;

	cout << "Enter password: ";
	cin >> pass;

	while (pass != "1234" && pass != "4321") {
		cout << "Invalid password, try again.\nEnter password: ";
		getline(cin, pass);
	}
	cout << "Password accepted.\n";
	return 0;
}
