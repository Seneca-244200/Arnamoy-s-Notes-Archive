#include<iostream>
#include "Weapon.h"
#include "Rifle.h"
#include "Player.h"

using namespace std;
using namespace seneca;

int main_poly() {
	// 1
	/*Weapon w1("Weapon1", 1200);
	w1.display(cout);


	Rifle r(120);
	r.display(cout);

	MachineGun mg;
	mg.display(cout);*/

	/*MachineGun mg1{ true };
	MachineGun mg2;

	Rifle rf1{ 150 };*/

	/*Player p1;
	p1.addWeapon(mg1);
	p1.addWeapon(mg2);

	p1.addWeapon(rf1);

	p1.displayWeapons(std::cout);*/

	Weapon* w1 = new Rifle{ 150 };
	delete w1;

	return 0;
}