#include<iostream>
#include"FullName.h"
#include"Utils.h"

using namespace std;
using namespace sdds;
using namespace seneca;

class TitledName : public FullName {
	char m_title[20]{};
public:
	TitledName() = default;
	TitledName(const char* title, const char* name, const char* lastName) :FullName(name, lastName) {
		ut.strcpy(m_title, title, 20);
	}


	// override the pure virtual function
	std::ostream& call(std::ostream& ostr = std::cout) {
		return ostr << "Welcome " << m_title << " " << *this;
	}
};

int main() {
	// Rule 3:   If the child HAS resources, it HAS to take care of proper copying
	// regardless the parent has RO3 or not.
	TitledName M{ "Mr", "Fred", "Rapp" }, N;

	M.call() << endl;

	N = M; // copy assignment operator

	N.call() << endl;

	//TitledName O = M; // copy constructor

	//O.call();

	return 0;
}