// Modular Example
// Transaction.h

#ifndef TRANSACTION_H__
#define TRANSACTION_H__

struct Transaction {
    int acct;      // account number
    char type;     // credit 'c' debit 'd'
    double amount; // transaction amount
};

void enter(struct Transaction*);
void display(const struct Transaction*);

#endif
