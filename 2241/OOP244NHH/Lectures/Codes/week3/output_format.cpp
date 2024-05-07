#include<iostream>
using namespace std;

int main_format() {
	int i = 123;
	double d = 123.4567890;

	cout.setf(ios::fixed);
	cout.precision(2);

	cout.fill('.');
	cout.width(20);
	cout << i << '*' << endl;


	cout.width(10);
	cout << d << '*' << endl;
	return 0;
}