#include<iostream>
using namespace std;

#include"Double.h"
using namespace sdds;

int main() {
	Double d(1.0);
	Double e;
	Double f;

	cout << "Please enter the value of e " << endl;
	e.read();

	// f = d + e;
	//f = d.operator+(e);

	// f = d + 2.34;

	//d += e;
	//d.operator+=(e);

	//f = -e;

	//f = 2.5 + e;
	//if (e) { cout << "Non 0" << endl; }

	//f = (Double)2.5; // explicit cast
	//f = 2.5;  // implicit cast, done by compiler
	//++e; // prefix
	//f = e++;

	if (d == e) { cout << "Equal val " << endl; }
	

	cout.setf(ios::fixed);
	cout.precision(2);
	d.print();
	e.print();
	f.print();

	return 0;
}