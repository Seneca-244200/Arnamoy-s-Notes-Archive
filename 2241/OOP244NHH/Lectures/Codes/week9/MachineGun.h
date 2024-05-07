#ifndef SENECA_MACHINEGUN_H__
#define SENECA_MACHINEGUN_H__
#include<iostream>
#include"Weapon.h"

using namespace std;

namespace seneca {
	class MachineGun : public Weapon
	{
		bool bipodAttached;
	public:
		MachineGun(bool bAttached = false);

		void display(std::ostream&) const override;

		// talk about making it virtual
		~MachineGun();

	};
}
#endif

