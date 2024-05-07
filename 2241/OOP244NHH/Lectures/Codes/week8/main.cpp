#include<iostream>
#include "Weapon.h"
#include "Rifle.h"

using namespace std;
using namespace seneca;

Weapon& showWeapon(Weapon& w) {
	cout << "In showweapon " << endl;
	return w;
}

int main() {

	/*Weapon w1("Weapon1", 1200);

	w1.aim();
	w1.fire();

	showWeapon(w1)*/; // showWeapon(Weapon w = w1);

	Rifle r(120);
	/*r.attachSuppressor();

	r.aim();
	r.reload();
	r.fire();*/

	/*r.display(std::cout);

	r.display(std::cout, 4);

	r.display(120);*/

	
	cout << r << endl;



	return 0;
}