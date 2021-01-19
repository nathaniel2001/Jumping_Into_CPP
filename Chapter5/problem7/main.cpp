#include <iostream>
#include <string>

using namespace std;

int main() {

        int selection, vote1 = 0, vote2 = 0, vote3 = 0;
        string question, option1, option2, option3;

        cout << "Press 0 to exit end during selection.\n\nEnter question for poll: ";
        getline(cin, question);
        cout << "Enter option one: ";
        getline(cin, option1);
        cout << "Enter option two: ";
        getline(cin, option2);
        cout << "Enter option Three: ";
        getline(cin, option3);

	while(true) {
		cout << option1 << ", votes: " << vote1 << endl;
		cout << option2 << ", votes: " << vote2 << endl;
		cout << option3 << ", votes: " << vote3 << endl;
		cout << "Make a selection: ";
		cin >> selection;

		if (selection == 0) {
			break;
		} else if (selection == 1) {
			vote1++;
		} else if (selection == 2) {
			vote2++;
		} else if (selection == 3) {
			vote3++;
		} else {
			cout << "Error: Invalid input.\n";
		}
	}
	return 0;
}
