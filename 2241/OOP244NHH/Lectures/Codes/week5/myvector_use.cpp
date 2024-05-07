#include<iostream>
#include"MyVector.h"


using namespace std;

int main_vector() {
	sdds::MyVector myvec;
	myvec.push_back(1);
	myvec.push_back(2);
	myvec.push_back(3);
	myvec.push_back(4);

	// range-based for loop
	//for (auto& i : myvec) {
	//	cout << i << endl;
	//}

	// syntactic sugar
	 myvec[0] = 100;

	for (int i = 0; i < myvec.getSize(); i++) {
		cout << myvec[i] << endl;
	}
	
	

	return 0;
}