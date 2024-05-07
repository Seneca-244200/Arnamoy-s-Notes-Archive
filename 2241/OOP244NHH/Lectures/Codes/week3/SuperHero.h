#ifndef SENECA_SUPERHERO_H__
#define SENECA_SUPERHERO_H__

#include<iostream>
using namespace std;
namespace seneca {
	class SuperHero
	{
	private:
		char* name; // dynamic memory, without destructor, can cause memleak
		char* power; // same as above
		int age;
		int powerLevel;
		void strcpy_nhh(char* dest, const char* src);
	public:
		//SuperHero(); // constructor
		//SuperHero(const char*); // overloaded constructor

		// constructor with default arguments ** NO RETURN TYPE **
		SuperHero(const char* heroName = "UNKNOWN", const char* heroPower = "UNKNOWN", int heroAge = 0, int heroPowerLevel = 0);

		// Destructor ** NO RETURN TYPE**
		~SuperHero();
		ostream& display(ostream& ostr = std::cout);
		SuperHero& setPowerLevel(int powerLevelVal);
	};
}
#endif

