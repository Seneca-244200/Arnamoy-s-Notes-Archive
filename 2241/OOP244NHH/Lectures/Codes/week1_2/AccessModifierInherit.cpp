// C++ program to demonstrate the working of public inheritance

#include <iostream>
using namespace std;

class Base {
private:
    int pvt = 1;

protected:
    int prot = 2;

public:
    int pub = 3;
    // TAKE OUT
    // function to access private member
    int getPVT() {
        return pvt;
    }
};

class PublicDerived : public Base {
public:
    // function to access protected member from Base
    int getProt() {
        return prot;
    }
};

int main_access() {
    PublicDerived object1;
    // How do I access the pvt and prot from here?
    // We cannot do object1.pvt and object1.prot
    cout << "Private = " << object1.getPVT() << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.pub << endl;
    return 0;
}