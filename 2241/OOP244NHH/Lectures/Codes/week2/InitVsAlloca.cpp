#include<iostream>

using namespace std;

int main_init() {
	int i = 10; // allocation AND initialization
	int j;      // just allocation, NO initialization

	int k(100);  // allocation of integer AND init with val 100
	int m{ 200 }; // allocation of integer AND init with val 200

	j = 10;
	cout << j << endl;
	cout << k << endl;
	cout << m << endl;
	return 0;

}