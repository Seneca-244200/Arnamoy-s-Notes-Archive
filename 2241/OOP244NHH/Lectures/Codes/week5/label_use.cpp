#include<iostream>
#include<fstream>
using namespace std;

#include"Label.h"
using namespace seneca;

int main(){
	//cout.setstate( ios::failbit );

	//Label L{ "Hello" }; // explicit call to single arg cons called

	Label L = "Hi"; // object initialization, will not work 
					// if single arg cons is marked "explicit"
					// Even if overloaded an assignment operator.

	Label L; // no argument constructor is called
	L = "Hi"; // overloaded Assignment operator is called

	Label N{ "Howdy" };

	N = L; // copy assignment operator, worse
	//		// because memleak and segfault

	//Label N = L; // copy constructor, better 
				 //no memleak, but still segfault
	 // if we want to prevent, then use delete keyword


	cout << L << endl;
	cout << N << endl;


	// Writing to a file
	/*ofstream f{ "output.txt" };

	f << L << endl;
	f << N << endl;*/



	//cout << "Please give a label " << endl;
	/*L.read();
	L.print();*/


	// Input output operators overloaded
	/*cin >> L;
	cout << L;*/


	
	return 0;
}