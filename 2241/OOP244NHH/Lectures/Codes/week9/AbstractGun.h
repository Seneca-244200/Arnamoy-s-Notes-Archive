#ifndef SENECA_ABSTRACT_GUN_H__
#define SENECA_ABSTRACT_GUN_H__


#include<iostream>
#include"WeaponInterface.h"

namespace seneca {
    // Abstract class inheriting interface
    class AbstractGun :public WeaponInterface
    {
    protected:
        char m_name[40];
        int m_price;

    public:
        AbstractGun(const char* name = "DEFAULT", int price = 0);

        // Method that will be overridden
        void aim() const override;

        // *** fire() and reload() are inherited abtract methods,
        // making the class abstract

        virtual ~AbstractGun() {}
    };
}
#endif

