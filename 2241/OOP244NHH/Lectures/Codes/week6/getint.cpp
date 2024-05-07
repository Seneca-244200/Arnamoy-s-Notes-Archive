#include<iostream>

using namespace std;


int getInt() {
	int num;
	bool done = false; // this is to indicate whether we have successfully extracted an integer

	do {
		cout << "Enter an integer " << endl;
		cin >> num;
		if (cin.fail()) {
			cout << "Bad integer" << endl;
			cin.clear();
			cin.ignore(1000000, '\n');
		}
		else {
			// 
			if (cin.peek() != '\n') {
				cout << "Enter valid integers only" << endl;
				cin.ignore(1000000, '\n');

			}
			else {
				// success
				done = true;
			}
		}

	} while (!done);

	return num;
}


int main_getint() {

	int res;
	res = getInt();
	cout << "Got " << res << endl;
	return 0;
}