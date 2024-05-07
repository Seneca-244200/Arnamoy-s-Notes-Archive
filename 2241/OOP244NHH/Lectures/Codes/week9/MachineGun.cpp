#include "MachineGun.h"
using namespace seneca;

MachineGun:: MachineGun(bool bAttached) :Weapon("Machine Gun", 3500), bipodAttached(bAttached) {
	std::cout << "Constructor for machine gun bipod " << bAttached << std::endl;
};


void MachineGun::display(std::ostream& ostr) const
{
	ostr << "displaying a machine gun" << endl;
}

MachineGun::~MachineGun()
{
	cout << "Destroying a machine gun " << endl;
}
