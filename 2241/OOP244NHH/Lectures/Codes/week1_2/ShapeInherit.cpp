#include <iostream>

// Base class for a generic shape
// PARENT CLASS
class Quadrilateral {
protected:
    int width;
    int height;

public:
    // constructor
    Quadrilateral(int w, int h) : width(w), height(h) {}

    void print() const {
        std::cout << "Width: " << width << ", Height: " << height << std::endl;
    }
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
    void setWidth() { width = 0; }
};


int main_inherit() {

    // With inheritance
    //Quadrilateral quad(7, 5);
    Rectangle rectangle(8, 6);
    Square square(4);
    //Rectangle rectangle;
    //Square square;

    Quadrilateral* shapes[] = { &rectangle, &square };

    std::cout << "Rectangle: ";
    shapes[0]->print();  // Output: Width: 8, Height: 6

    std::cout << "Square: ";
    shapes[1]->print();     // Output: Width: 4, Height: 4

    return 0;
}
