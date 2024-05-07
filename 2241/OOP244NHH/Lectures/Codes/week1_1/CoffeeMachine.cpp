#include <iostream>
using namespace std;

class CoffeeMachine {
private:
    int milk = 0;
    int coffee = 0;
    int water = 0;
    bool froth = false;
public:
    // type 0 = drip, 1 = espresso, 2 = cuppacino
    void brewCoffee(int type) {
        std::cout << "Brewing delicious coffee!\n";
        // Code for brewing coffee
        switch (type) {
        case 0: // drip
            if (water <= 0) {
                cout << "Out of water, refilling" << endl;
                addWater();
            }
            water -= 10;
            coffee -= 2;
            cout << "Here's your drip coffee" << endl;
            break;
        case 1: //espresso
            if (water <= 0) {
                cout << "Out of water, refilling" << endl;
                addWater();
            }
            water -= 3;
            coffee -= 3;
            cout << "Here's your espresso" << endl;
            break;
        case 2: // cuppacino
            if (water <= 0) {
                cout << "Out of water, refilling" << endl;
                addWater();
            }
            if (milk <= 0) {
                cout << "Out of milk, refilling" << endl;
                addMilk();
            }

            if (!froth)
                frothMilk();
            water -= 5;
            coffee -= 2;
            milk -= 5;
            cout << "Here's your Cuppacino" << endl;
        }
    }

    void addMilk() {
        std::cout << "Adding milk to your machine.\n";
        // Code for adding milk
        milk += 100;
    }

    void addWater() {
        std::cout << "Adding water to your machine.\n";
        water += 100;
    }

    void frothMilk() {
        std::cout << "Frothing milk.\n";
        froth = true;
    }

    void cleanMachine() {
        froth = false;
        milk = water = coffee = 0;
    }
};

int main_coffee() {
    // Creating an instance of the CoffeeMachine class
    CoffeeMachine myCoffeeMachine;

    while (true) {
        cout << "Welcome to ROBO Barista, what coffee do you want? " << endl;
        int coffeeType;
        cin >> coffeeType;

        // Brewing coffee and adding milk
        myCoffeeMachine.brewCoffee(coffeeType);
    }

    return 0;
}
