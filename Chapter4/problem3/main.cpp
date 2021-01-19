#include <iostream>
#include <string>

using namespace std;

int main() {
        float x, y;
        string operation;

        cout << "Enter X: ";
        cin >> x;
        cout << "Enter operator (+, -, *, /): ";
        cin >> operation;
        while (operation != "*" && operation != "/" && operation != "+" && operation != "-") {
                cout << "Not an operator, enter operator (+, -, *, /): ";
                cin >> operation;
        }
        cout << "Enter Y: ";
        cin >> y;

        if (operation == "+") {
                cout << endl << x << operation << y << "=" << x+y << endl;
        }
        if (operation == "-") {
                cout << endl << x << operation << y << "=" << x-y << endl;
        }
        if (operation == "*") {
                cout << endl << x << operation << y << "=" << x*y << endl;
        }
        if (operation == "/") {
                cout << endl << x << operation << y << "=" << x/y << endl;
        }
        return 0;
}
