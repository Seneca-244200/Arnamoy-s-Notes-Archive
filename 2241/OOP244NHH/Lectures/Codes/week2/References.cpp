#include<iostream>

using namespace std;

int main_reference() {
	int i = 10;
	int& r = i;

	cout << "Here are the values " << i << "..." << r << endl;
	cout << "Here are the addresses " << unsigned(&i) << "..." << unsigned(&r) << endl;

	r = 200;

	cout << "Here are the values after mod " << i << "..." << r << endl;
	return 0;

}