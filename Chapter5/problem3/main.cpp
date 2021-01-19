#include <iostream>

using namespace std;

int main() {

	int puts, puts_count = 0;

	cout << "Enter a number: ";
	cin >> puts;
	puts_count++;

	while (puts != 0) {
		cout << "Number of numbers inputted: " << puts_count << endl << "Enter a number: ";
		cin >> puts;
		puts_count++;
	}
	if (puts == 0) {
		cout << "Total number of inputs: " << puts_count << endl;
	}
}
