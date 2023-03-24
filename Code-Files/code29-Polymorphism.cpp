#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cmath>
#include <numeric>
using namespace std;

class Shape {
    protected:
        double width;
        double height;
    public:
        Shape(double length) {
            width = length;
            height = length;
        }
        Shape(double w, double h) {
            width = w;
            height = h;
        }
        // virtual keyword allows for overriding in derived classes (see below)
        virtual double area() {
            return width * height;
        }
        ~Shape() {
            cout << "Shape destructor called" << endl;
        }
};

class Circle: public Shape {
    public:
        Circle(double length) : Shape(length) {}

        // override area() method from protected Shape class
        double area() {
            return 3.14159 * pow((width / 2), 2);
        }

        ~Circle() {
            cout << "Circle destructor called" << endl;
        }
};

void ShowArea(Shape& shape) {
    cout << "Area: " << shape.area() << endl;
}

int main() {
    Shape square(10);
    ShowArea(square);

    Shape rectangle(5, 10);
    ShowArea(rectangle);

    Circle circle(10);
    ShowArea(circle);

    return 0;
}