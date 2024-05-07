#include <iostream>
using namespace std;

// Base class for a generic shape
class Quadrilateral {
public:
    int width;
    int height;

    Quadrilateral(int w, int h) : width(w), height(h) {}

    void print() const {
        std::cout << "Width: " << width << ", Height: " << height << std::endl;
    }

    virtual int calculatePerim() { return width + height; }
    
};

// Derived class for a specific shape: Rectangle
class Rectangle : public Quadrilateral {
public:
    Rectangle(int w, int h) : Quadrilateral(w, h) {}
};

// Derived class for a specific shape: Square
class Square : public Quadrilateral {
public:
    Square(int side) : Quadrilateral(side, side) {}
    
};


int main() {

    // With inheritance
    Rectangle rectangle = Rectangle(8, 8);
    Square square = Square(5);

    std::cout << "Rectangle: ";
    cout << rectangle.calculatePerim() << endl;

    std::cout << "Square: ";
    cout << square.calculatePerim() << endl;


    return 0;
}
