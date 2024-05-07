// TAKE OUT
#ifndef B_H
#define B_H
#include"b.h"
#endif
#include <iostream>
using namespace std;

// Compile command in VS
//    cl /Fe a.cpp b.cpp c.cpp main_module.cpp
int main_module() {
	cout << "Hello" << endl;
	return 0;
}