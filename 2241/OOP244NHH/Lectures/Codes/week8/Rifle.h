#ifndef SENECA_RIFLE_H__
#define SENECA_RIFLE_H__
#include"Weapon.h"
namespace seneca {
	class Rifle : public Weapon
	{
		int barrelLength;
	public:
		Rifle(int blength = 0);

		void attachSuppressor(); // unique to rifle, not to weapon

		void aim(); // shadowing parent aim

		void fire();

		// shadowing display 1
		void display(std::ostream&) const;
		using Weapon::display;

		~Rifle();
	};

	std::ostream& operator<<(std::ostream& ostr, Rifle& r);

}
#endif

