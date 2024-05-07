#include<iostream>

using namespace std;


int main_bool() {
	bool var = true;

	cout << var << endl; // displays 1
	//cout << boolalpha << var << endl; // display true
	cout << !var << endl;                          // 0​
	cout << !!var << endl;                         // 1​
	int x = 4;
	cout << !!4 << endl;               // 1
	return 0;

}