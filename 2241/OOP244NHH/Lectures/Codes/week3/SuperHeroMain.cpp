#include<fstream>
#include"SuperHero.h"

using namespace seneca;

int main() {
	//SuperHero superhero;
	//SuperHero superhero1("Bruce Wayne");
	//SuperHero superhero2("Peter Parker", "web shooting", 19, 100);
	//superhero.display();
	//superhero1.display();
	//superhero2.display();


	// Creating a scope for no reason!!
	{
		ofstream file("output.txt");
		SuperHero superhero3("Bruce Banner", "hulk smash", 40, 1000);
		superhero3.display();
		superhero3.setPowerLevel(500).display(file) << " After fight " << endl;

		
	} // when we get out of the above no-reason scope, the destructor for 
	  //  Bruce Banner is called.

	// Here the destructors are called in the OPPOSITE order of constructors.
	// First, Peter Parker destructor is called (superhero2)
	// Then, Bruce Wayne destructor is called (superhero1)
	// Then, UNKNOWN destructor is called (superhero)
	return 0;

}