#include<iostream>

using namespace std;
#include"MyVector.h"
namespace sdds {
	// COnstructor 

	MyVector::MyVector() : array(nullptr), size(0), capacity(0) {}

	void MyVector::push_back(int value)
	{
		if (size == capacity) {
			// resizing or initializing
			if (capacity == 0) {
				// initializing
				capacity = 1;
			}
			else {
				// resizing
				capacity = 2 * capacity;
			}

			// dynamic memory allocation
			int* newArray = new int[capacity]; // this goes into the heap

			if (newArray == nullptr) {
				cout << "Not enough mem available" << endl;
				return;
			}

			// COpy over the old values to new allocated memory
			for (int i = 0; i < size; i++) {
				newArray[i] = array[i];
			}

			// get rid of the old memory
			delete[] array;

			array = newArray;

		}
		array[size] = value;
		size++;
	}

	int* MyVector::begin()
	{
		return array;
	}

	int* MyVector::end()
	{
		return array+size;
	}

	MyVector::~MyVector() {
		// free the allocated memory
		delete[] array;
	}

	/*MyVector::MyVector() {
		array = nullptr;
		size = 0;
		capacity = 0;
	}*/


}