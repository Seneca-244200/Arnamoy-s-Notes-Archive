#include <iostream>
#include "Transaction.h"

using namespace std;
void enter(Transaction* tr)
{
    cout << "enter account number ";
    cin >> tr->acct;
    cout << "Type? d for debit, c for credit:";
    cin >> tr->type;
    cout << "Enter amount ";
    cin >> tr->amount;

}

void display(const Transaction* tr)
{
    cout << "Account " << tr->acct << endl;
    cout << (tr->type == 'd' ? " Debit $" : " Credit $") << endl;
    cout << tr->amount << endl;
}
