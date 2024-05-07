#include<iostream>
#include"MyVector.h"


using namespace std;

int main() {
	sdds::MyVector myvec;
	myvec.push_back(1);
	myvec.push_back(2);
	myvec.push_back(3);
	myvec.push_back(4);

	for (auto& i : myvec) {
		cout << i << endl;
	}

	return 0;
}