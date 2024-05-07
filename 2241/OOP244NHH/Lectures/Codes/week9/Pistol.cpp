#include "Pistol.h"
using namespace seneca;

void Pistol::fire() const
{
    std::cout << "Firing " << m_name << "!" << std::endl;
}

void Pistol::reload() const
{
    std::cout << "Reloading " << m_name << "!" << std::endl;
}

void Pistol::display(std::ostream& ostr) const
{
    ostr << "Displaying " << m_name << std::endl;
}

Pistol::~Pistol()
{
    std::cout << "Destroying " << m_name << std::endl;
}
