#include <iostream>

using namespace std;

int main() {

	int menu_input;

	cout << "1) Menu option 1\n2) Menu option 2\n3) Menu option 3\nSelect a menu option: ";
	cin >> menu_input;

	while (menu_input != 3 || menu_input != 1 || menu_input != 2) {
		cout << "\nNot an option.\n1) Menu option 1\n2) Menu option 2\n3)" <<
			" Menu option 3\nSelect a menu option: ";
		cin >> menu_input;
	}
	return 0;
}
