#include <iostream>
#include <string>

using namespace std;

void bottles_of_beer() {
	int bottles = 0;
	while (bottles != 100) {
		cout << bottles << " of beer on the wall.\n";
		bottles++;
		if (bottles == 100) {
		bottles = 0;
		break;
		}
	}
}

void calculator() {
	float x, y;
	string operation;
        cout << "Enter X: ";
        cin >> x;
	while (true) {
		cout << "Enter operator (+, -, *, /): ";
		cin >> operation;
		if (operation == "+") {
			break;
		} else if (operation == "-") {
			break;
		} else if (operation == "*") {
			break;
		} else if (operation == "/") {
			break;
		} else {
			cout << "Not an operation.\n\n";
		}
	}
        cout << "Enter Y: ";
        cin >> y;

        if (operation == "+") {
                cout << endl << x << operation << y << "=" << x+y << endl << endl;
        } else if (operation == "-") {
                cout << endl << x << operation << y << "=" << x-y << endl << endl;
        } else if (operation == "*") {
                cout << endl << x << operation << y << "=" << x*y << endl << endl;
        } else if (operation == "/") {
                cout << endl << x << operation << y << "=" << x/y << endl << endl;
        }
}

int main() {

	int menu_input;

	while (true) {
		cout << "1) 100 Bottles of beer\n2) Calculator\n3) Exit\nSelect a menu option: ";
		cin >> menu_input;
		if (menu_input == 1) {
			bottles_of_beer();
		} else if (menu_input == 2) {
			calculator();
		} else if (menu_input == 3) {
			cout << "Exiting...\n";
			return 0;
		} else {
			cout << "Error: Invalid input.\n";
		}
	}
}
