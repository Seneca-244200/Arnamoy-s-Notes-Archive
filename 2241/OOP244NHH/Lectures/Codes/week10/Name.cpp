#include "Name.h"
#include "Utils.h"
using namespace sdds;
seneca::Name::Name(const char* value)
{
	ut.aloCpy(m_name, value);
}

seneca::Name::Name(const Name& N)
{
	ut.aloCpy(m_name, N.m_name);
}

seneca::Name& seneca::Name::operator=(const Name& N)
{
	// TODO: insert return statement here
	if (this != &N) {
		ut.reAloCpy(m_name, N.m_name);
	}
	return *this;
}

seneca::Name::~Name()
{
	delete[] m_name;
}

std::ostream& seneca::Name::write(std::ostream& ostr) const
{
	// TODO: insert return statement here
	return ostr << (m_name ? m_name : "No Name");
}

std::ostream& seneca::operator<<(std::ostream& leftOperan, const Name& rightOperan)
{
	// TODO: insert return statement here
	return rightOperan.write(leftOperan);
}
