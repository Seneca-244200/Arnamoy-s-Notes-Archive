#ifndef SENECA_WEAPON_H__
#define SENECA_WEAPON_H__
namespace seneca {
	class Weapon
	{
	protected:
		char m_name[40];
		int m_price;
	public:
		Weapon(const char* name = "DEFAULT", int price = 0);

		Weapon(Weapon& w); // copy constructor

		// member function
		void aim();
		void fire();
		void reload();

		// overloaded display() function 
		virtual void display(std::ostream&) const = 0;

		virtual ~Weapon();

	};

	std::ostream& operator<<(std::ostream& ostr, Weapon& r);
}
#endif
