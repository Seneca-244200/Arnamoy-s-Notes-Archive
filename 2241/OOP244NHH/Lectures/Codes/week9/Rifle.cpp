#include<iostream>
#include "Rifle.h"
using namespace std;

//seneca::Rifle::Rifle(int blength)
//{
//	cout << "Constructor of Rifle " << endl;
//	barrelLength = blength;
//}
seneca::Rifle::Rifle(int blength) : Weapon("Assault Rifle", 1200), barrelLength(blength)
{
	cout << "Constructor of Rifle " << barrelLength << endl;
	//barrelLength = blength;
}

void seneca::Rifle::attachSuppressor()
{
	cout << "Attaching suppressor " << endl;
}

void seneca::Rifle::aim()
{
	cout << "Aiming Assaault rifle " << endl;
}

void seneca::Rifle::fire()
{
	// call parent's fire
	Weapon::fire();
	cout << "Firing assault rifle" << endl;
}

void seneca::Rifle::display(std::ostream& ostr) const
{
	ostr << "displaying rifle " << endl;
}

seneca::Rifle::~Rifle()
{
	cout << "Destroying rifle " << endl;
}

std::ostream& seneca::operator<<(std::ostream& ostr, Rifle& r)
{
	// TODO: insert return statement here
	ostr << "Outputting rifle " << endl;
	return ostr;
}


