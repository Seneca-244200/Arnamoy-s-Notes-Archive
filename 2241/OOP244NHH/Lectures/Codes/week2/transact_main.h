#ifndef TRANSAC_MAIN_H__
#define TRANSACT_MAIN_H__

#define NO_TRANSACTIONS 3

// #include"Transaction.h"  // This would solve the compiler warning about not finding
							// Transaction struct, but will create two definitions of the struct
							// as we are including the header file in transact_main.cpp as well.

struct Transaction; // forward declaration (desired solution)
void add(double* bal, const Transaction* tr);


#endif
