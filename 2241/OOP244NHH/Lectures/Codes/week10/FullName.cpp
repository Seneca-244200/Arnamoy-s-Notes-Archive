#include "FullName.h"
#include "Utils.h"

using namespace sdds;

seneca::FullName::FullName(const char* firstname, const char* lastname) : Name(firstname)
{
	ut.aloCpy(m_lastName, lastname);

}

seneca::FullName::FullName(const FullName& FN) : Name(FN)
{
	ut.aloCpy(m_lastName, FN.m_lastName);
}

seneca::FullName& seneca::FullName::operator=(const FullName& FN)
{
	// TODO: insert return statement here
	if (this != &FN) {
		Name::operator=(FN);
		ut.reAloCpy(m_lastName, FN.m_lastName);
	}
	return *this;
}

seneca::FullName::~FullName()
{
	delete[] m_lastName;
}

std::ostream& seneca::FullName::write(std::ostream& ostr) const
{
	// TODO: insert return statement here
	Name::write(ostr);
	if (m_lastName) {
		ostr << " " << m_lastName;
	}
	return ostr;
}


