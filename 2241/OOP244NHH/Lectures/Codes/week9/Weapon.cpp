#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "Weapon.h"

using namespace std;
using namespace seneca;
Weapon::Weapon(const char* name, int price)
{

	strcpy(m_name, name);
	cout << "Constructor for weapon " << name << endl;
	m_price = price;
	return;
}

seneca::Weapon::Weapon(Weapon& w)
{
	cout << "Copy contructor " << endl;
	strcpy(m_name, w.m_name);
	m_price = w.m_price;
}

void Weapon::aim()
{
	cout << "Aiming weapon" << endl;
	return;
}

void seneca::Weapon::fire()
{
	cout << "Firing weapon" << endl;
	return;
}

void seneca::Weapon::reload()
{
	cout << "Reloading weapon" << endl;
	return;
}

void seneca::Weapon::display(std::ostream& ostr) const
{
	ostr << "Display weapon " << endl;
}

seneca::Weapon::~Weapon()
{
	cout << "Destroying weapon" << endl;
}

std::ostream& seneca::operator<<(std::ostream& ostr, Weapon& r)
{
	// TODO: insert return statement here
	ostr << "Outputting weapon " << endl;
	return ostr;
}
