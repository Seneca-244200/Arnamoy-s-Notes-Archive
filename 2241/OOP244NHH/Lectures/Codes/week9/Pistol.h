#ifndef SENECA_PISTOL_H__
#define SENECA_PISTOL_H__

#include<iostream>
#include"AbstractGun.h"
namespace seneca {
    class Pistol : public AbstractGun
    {
    public:
        Pistol(const char* name = "PISTOL", int price = 0)
            : AbstractGun(name, price) {}

        // overriding all Abstract methods to 
        // create a concrete class
        void fire() const override;
        void reload() const override;

        void display(std::ostream&) const;

        ~Pistol();
    };
}

#endif
