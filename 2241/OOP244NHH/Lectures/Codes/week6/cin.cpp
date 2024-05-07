#include<iostream>

using namespace std;
int main_cin() {
	//int num1, num2;
	//cout << "Please enter a number: ";
	////cin.ignore(3);
	//cin >> num1;

	//if (cin) { cout << "Success1" << endl; }
	//else { cin.clear(); cin.ignore(1000000, '\n'/*delimiter*/);  cout << "Fail1" << endl; }

	//cout << num1 << endl;

	////cin.ignore(3);
	//cin >> num2;

	//if (cin) { cout << "Success2" << endl; }
	//else { cin.clear(); cin.ignore(1000000, '\n'/*delimiter*/);  cout << "Fail2" << endl; }

	//cout << num2 << endl;

	//char str[50];
	//cin.ignore(1000000, '\n'/*delimiter*/); // flushing the key board

	//cin >> str;

	//cout << str << endl;

	// get
	char str[50];

	cout << "Enter string:";
	cin.getline(str, 5, 'x' /*delimiter*/);

	cout << str << endl;

	cin >> str;

	cout << "Rest " << str << endl;

	/*cin.get(str, 5);

	cout << "Rest 2-" << str << endl;*/



	//char str[10];
	//cin >> str;
	/*int num2;
	cin >> num2;


	if (cin) { cout << "Success2" << endl; }
	else { cin.clear(); cout << "Fail2" << endl; }

	cout << num1 << "," << num2 << endl;*/

	return 0;
}