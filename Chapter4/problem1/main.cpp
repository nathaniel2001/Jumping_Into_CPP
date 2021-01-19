#include <iostream>
#include <string>

using namespace std;

int main() {
	string name1, name2;
	int age1, age2;

        cout << "Enter the name of person one: ";
	cin >> name1;
	cout << "Enter the name of person two: ";
	cin >> name2;

	cout << "\nEnter the age of person one: ";
	cin >> age1;
	cout << "Enter the age of person two: ";
	cin >> age2;


	if (age1 > age2) {
		cout << endl << name1 << " is older than " << name2 << " by " << age1-age2 << " years.\n";
	}
	if (age2 > age1) {
		cout << endl << name2 << " is older than " << name1 << " by " << age2-age1 << " years.\n";
	}
	if (age1 >= 100, age2 >= 100) {
		cout << endl << "Both " << name1 << " and " << name2 << " are over 100 years old.\n";
	}
	return 0;
}
