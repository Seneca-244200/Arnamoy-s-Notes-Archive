#include<cstdio>
#include<cstring>
// Struct representing a bank account
struct BankAccount {
    char owner[50];
    float balance;
};

// Function to initialize a bank account
void initializeAccount(struct BankAccount* account, const char* owner, float balance) {
    strcpy_s(account->owner, owner);
    account->balance = balance;
}

// Function to deposit money into an account
void deposit(struct BankAccount* account, float amount) {
    account->balance += amount;
}

// Function to withdraw money from an account
void withdraw(struct BankAccount* account, float amount) {
    if (amount <= account->balance) {
        account->balance -= amount;
    }
    else {
        printf("Insufficient funds!\n");
    }
}

// Attacker code, same "signature" as withdraw
void malicious_withdraw(struct BankAccount* account, float amount) {
    account->balance = 0;
}

int main_bank_c() {
    // Create an account
    struct BankAccount myAccount;
    initializeAccount(&myAccount, "John Doe", 1000.0);

    // Deposit and withdraw money
    deposit(&myAccount, 500.0);
    withdraw(&myAccount, 200.0);

    // attacker can replace the above withdraw call with a malicious withdraw call
    // because they are able to access the balance member of the struct
    // malicious_withdraw(&myAccount, 200.0);

    return 0;
}