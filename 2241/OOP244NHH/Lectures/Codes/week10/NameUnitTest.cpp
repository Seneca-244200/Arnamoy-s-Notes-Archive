#include<iostream>
#include"Name.h"
#include "Utils.h"

using namespace std;
using namespace seneca;
using namespace sdds;

class CallableName : public Name {
	char m_title[20]{}; // NOT a resource
public:
	CallableName() = default;
	CallableName(const char* title, const char* name):Name(name) {
		ut.strcpy(m_title, title, 20);
	}

	// override the pure virtual function
	std::ostream& call(std::ostream& ostr = std::cout) {
		return ostr << "Welcome " << m_title << " " << *this;
	}
};

int main_name() {
	//Name N; // Abstract class, cannot create object

	// Rule 1. If your parent class implements rule of three
	// and you (child) does not need rule of three
	// its OK to skip implementing it.
	// Rule 2:  If the child has static members (no resources)
	// then its still ok to skip implementing rule of three in the
	// child if the parent has it implemented.

	CallableName N("Mr.", "Fred"), M;

	cout << N << endl;
	N.call() << endl;

	M = N; // this triggers the copy assignment of parent
	M.call() << endl;

	CallableName O = N; // this triggers copy constructor
	O.call();



	return 0;
}