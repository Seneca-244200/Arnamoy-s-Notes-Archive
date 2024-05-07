#include "Player.h"
using namespace seneca;

//void Player::addMGs(MachineGun& mg)
//{
//	if (mgs == maxMGs) {
//		cout << "Cannot add machine gun " << endl;
//		return;
//	}
//	machineGuns[mgs++] = &mg;
//}
//
//void Player::addRifle(Rifle& rf)
//{
//	if (rfs == maxRifles) {
//		cout << "Cannot add rifle " << endl;
//		return;
//	}
//	rifles[rfs++] = &rf;
//}

void Player::addWeapon(Weapon& wp)
{
	if (wps == maxWps) {
		std::cout << "Cannot add weapon " << endl;
		return;
	}
	weapons[wps++] = &wp;
}

void Player::displayWeapons(std::ostream& ostr) const
{
	//// Display machine guns
	//for (int i = 0; i < mgs; i++) {
	//	machineGuns[i]->display(std::cout);
	//}
	//// display rifles
	//for (int i = 0; i < rfs; i++) {
	//	rifles[i]->display(std::cout);
	//}
	for (int i = 0; i < wps; i++) {
		weapons[i]->display(ostr);
	}

}

Player::~Player()
{
	cout << "Destroying player" << endl;
}
