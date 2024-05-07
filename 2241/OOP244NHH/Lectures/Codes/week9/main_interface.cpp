#include<iostream>
#include"WeaponInterface.h"
#include"Pistol.h"

using namespace seneca;

int main() {

	//WeaponInterface w1; // Does not work
	//AbstractGun ag; // Does not work

	// explain constructor order, also explain two constructors
	// are shown when you start typing

	WeaponInterface* wp[3] = { new Pistol("PISTOL1", 120),
							   new Pistol("PISTOL2", 300),
							   new Pistol("PISTOL3", 540) };

	for (int i = 0; i < 3; i++) {
		// Calling the method inherited from the abstract parent
		wp[i]->aim();

		// Calling the method overridden
		wp[i]->fire();
	}

	// NOTE that destruction order is NOT reversed here
	for (int i = 0; i < 3; i++) {
		delete wp[i];
	}

	//AbstractGun* wp[3] = { new Pistol("PISTOL1", 120),
	//						   new Pistol("PISTOL2", 300),
	//						   new Pistol("PISTOL3", 540) };

	//for (int i = 0; i < 3; i++) {
	//	// Calling the method inherited from the abstract parent
	//	wp[i]->aim();

	//	// Calling the method overridden
	//	wp[i]->fire();
	//}

	//// NOTE that destruction order is NOT reversed here
	//for (int i = 0; i < 3; i++) {
	//	delete wp[i];
	//}

	return 0;
}