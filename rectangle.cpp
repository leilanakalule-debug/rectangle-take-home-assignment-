#include <iostream>

class Rectangle {
private:
    double width;
    double length;

public:
    // Function to set the width
    void setWidth(double w) {
        width = w;
    }

    // Function to set the length
    void setLength(double l) {
        length = l;
    }

    // Function to retrieve the width
    double getWidth() {
        return width;
    }

    // Function to retrieve the length
    double getLength() {
        return length;
    }

    // Function to calculate the area
    double calculateArea() {
        return width * length;
    }

    // Function to calculate the perimeter
    double calculatePerimeter() {
        return 2 * (width + length);
    }
};

int main() {
    // Create the first Rectangle object
    Rectangle rectangle1;

    rectangle1.setWidth(5);
    rectangle1.setLength(10);

    std::cout << "Rectangle 1" << std::endl;
    std::cout << "Width: " << rectangle1.getWidth() << std::endl;
    std::cout << "Length: " << rectangle1.getLength() << std::endl;
    std::cout << "Area: " << rectangle1.calculateArea() << std::endl;
    std::cout << "Perimeter: " << rectangle1.calculatePerimeter() << std::endl;

    std::cout << std::endl;

    // Create the second Rectangle object
    Rectangle rectangle2;

    rectangle2.setWidth(4);
    rectangle2.setLength(6);

    std::cout << "Rectangle 2" << std::endl;
    std::cout << "Width: " << rectangle2.getWidth() << std::endl;
    std::cout << "Length: " << rectangle2.getLength() << std::endl;
    std::cout << "Area: " << rectangle2.calculateArea() << std::endl;
    std::cout << "Perimeter: " << rectangle2.calculatePerimeter() << std::endl;

    return 0;
}