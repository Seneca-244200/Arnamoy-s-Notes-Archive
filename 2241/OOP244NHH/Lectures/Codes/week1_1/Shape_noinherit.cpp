#include <iostream>

class Square {
public:
    int width;
    int height;

    Square(int w, int h) : width(w), height(h) {}

    void print() const {
        std::cout << "Width: " << width << ", Height: " << height << std::endl;
    }
};

class Rectangle {
public:
    int width;
    int height;

    Rectangle(int w, int h) : width(w), height(h) {}

    void print() const {
        std::cout << "Width: " << width << ", Height: " << height << std::endl;
    }
};

class Parallelogram {
public:
    int width;
    int height;

    Parallelogram(int w, int h) : width(w), height(h) {}

    void print() const {
        std::cout << "Width: " << width << ", Height: " << height << std::endl;
    }
};

class Rhombus {
public:
    int width;
    int height;

    Rhombus(int w, int h) : width(w), height(h) {}

    void print() const {
        std::cout << "Width: " << width << ", Height: " << height << std::endl;
    }
};



int main_shape_noinherit() {
    // With inheritance
    Rectangle rectangle(8, 6);
    Square square(4, 4);
    Parallelogram par(8, 6);
    Rhombus rhom(4, 4);

    std::cout << "Rectangle: ";
    rectangle.print();  // Output: Width: 8, Height: 6

    std::cout << "Square: ";
    square.print();     // Output: Width: 4, Height: 4

    std::cout << "Parallelogram: ";
    par.print();  // Output: Width: 8, Height: 6

    std::cout << "Rhombus: ";
    rhom.print();     // Output: Width: 4, Height: 4

    return 0;
}
