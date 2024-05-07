#define _CRT_SECURE_NO_WARNINGS

#include "AbstractGun.h"
using namespace seneca;

AbstractGun::AbstractGun(const char* name, int price)
    : m_price(price)
{
    strcpy(m_name, name);
}

void AbstractGun::aim() const
{
    std::cout << "Abstract Aiming " << m_name << "." << std::endl;
}