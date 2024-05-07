#include <iostream>

// Base class for a generic shape
class Quadrilateral {
private:
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
};

// Derived class for a specific shape: Parallelogram
class Parallelogram : public Quadrilateral {
public:
    Parallelogram(int w, int h) : Quadrilateral(w, h) {}
};

// Derived class for a specific shape: Rhombus
class Rhombus : public Quadrilateral {
public:
    Rhombus(int side) : Quadrilateral(side, side) {}
};

int main() {

    // With inheritance
    Rectangle rectangle(8, 6);
    Square square(4);

    Quadrilateral* shapes[] = { &rectangle, &square };

    std::cout << "Rectangle: ";
    shapes[0]->print();  // Output: Width: 8, Height: 6

    std::cout << "Square: ";
    shapes[1]->print();     // Output: Width: 4, Height: 4

    return 0;
}
