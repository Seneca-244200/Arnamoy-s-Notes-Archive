#ifndef SENECA_PLAYER_H__
#define SENECA_PLAYER_H__

#include<iostream>
#include"Rifle.h"
#include"MachineGun.h"
#include"Weapon.h"

namespace seneca {
	// Max number of weapons for the players
	const int maxRifles = 5;
	const int maxMGs = 5;

	const int maxWps = 15;
	

	class Player
	{
		int mgs;
		int rfs;

		int wps;

		/*MachineGun* machineGuns[maxMGs];
		Rifle* rifles[maxRifles];*/

		Weapon* weapons[maxWps];

	public:
		Player() :mgs(0), rfs(0), wps(0) {}

		/*void addMGs(MachineGun& mg);
		void addRifle(Rifle& rf);*/

		void addWeapon(Weapon& wp);

		void displayWeapons(std::ostream&) const;

		~Player();

	};
}
#endif

