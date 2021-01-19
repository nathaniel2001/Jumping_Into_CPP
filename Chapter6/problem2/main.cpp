#include <iostream>
#include <string>

using namespace std;


float x, y, z;
string operation;

void add() {
	z = x+y;
	cout << endl << x << operation << y << "=" << z << endl << endl;
}
void subtract() {
	z = x-y;
	cout << endl << x << operation << y << "=" << z << endl << endl;
}
void multiply() {
	z = x*y;
	cout << endl << x << operation << y << "=" << z << endl << endl;
}
void divide() {
	z = x/y;
	cout << endl << x << operation << y << "=" << z << endl << endl;
}
int main() {

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
                add();
        } else if (operation == "-") {
                subtract();
        } else if (operation == "*") {
                multiply();
        } else if (operation == "/") {
                divide();
        }
}
