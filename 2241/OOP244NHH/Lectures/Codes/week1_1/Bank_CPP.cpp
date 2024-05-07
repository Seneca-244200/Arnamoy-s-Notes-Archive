#include <iostream>
#include <string>

class BankAccount {
private:
    std::string owner;
    float balance;

public:
    // Constructor
    BankAccount(const std::string& owner, float balance) : owner(owner), balance(balance) {}

    // Member function to deposit money
    void deposit(float amount) {
        balance += amount;
    }

    // Member function to withdraw money
    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
        }
        else {
            std::cout << "Insufficient funds!" << std::endl;
        }
    }

};


int main_bank_cpp() {
    // Create an account
    BankAccount myAccount("John Doe", 1000.0);

    // Deposit and withdraw money
    myAccount.deposit(500.0);
    myAccount.withdraw(200.0); // Replacing this wthdraw call with a call
                               // such as myAccount.malicious_withdraw() is
                               // difficult, because its not easy to add
                               // new members to a class.

    return 0;
}
