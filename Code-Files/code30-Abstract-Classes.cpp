#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cmath>
#include <numeric>
using namespace std;

// Abstract class cannot be instantiated (i.e. Shape shape; is not allowed)
class Shape {
    public:
        virtual double area() = 0;
        virtual double perimeter() = 0;
        virtual ~Shape() {}
};

// Circle class inherits from Shape class
class Circle: public Shape {
    protected:
        double radius;
    public:
        Circle(double r) {
            radius = r;
        }
        // override area() method from protected Shape class
        // "override final" prevents the method from being overridden in a derived class
        double area() override final {
            return 3.14159 * pow(radius, 2);
        }

        // override perimeter() method from protected Shape class
        // "override final" prevents the method from being overridden in a derived class
        double perimeter() override final {
            return 2 * 3.14159 * radius;
        }

        // override destructor
        ~Circle() {
            cout << "Circle destructor called" << endl;
        }
};

// Rectangle class inherits from Shape class
class Rectangle : public Shape {
    protected:
        double width;
        double height;
    public:
        Rectangle(double w, double h) {
            width = w;
            height = h;
        }
        // override area() method from protected Shape class
        // "override final" prevents the method from being overridden in a derived class
        double area() override final {
            return width * height;
        }

        // override perimeter() method from protected Shape class
        // "override final" prevents the method from being overridden in a derived class
        double perimeter() override final {
            return 2 * (width + height);
        }

        // override destructor
        ~Rectangle() {
            cout << "Rectangle destructor called" << endl;
        }
};

// Square class inherits from Rectangle class 
class Square: public Rectangle {
    public:
        Square(double length) : Rectangle(length, length) {}

        // override destructor
        ~Square() {
            cout << "Square destructor called" << endl;
        }
};

void showArea(Shape& shape) {
    cout << "Area: " << shape.area() << endl;
}

int main() {
    // MUST INIT SUBCLASSES, CANNOT INIT ABSTRACT CLASS
    Circle circle(10);
    showArea(circle);

    Rectangle rectangle(5, 10);
    showArea(rectangle);

    Square square(10);
    showArea(square);

    return 0;
}