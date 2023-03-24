#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cmath>
#include <numeric>
using namespace std;

// Same as interface in TypeScript
struct Shape {
    // properties
    double width;
    double height;
    string name;

    // methods
    void setValues(double w, double h, string n) {
        width = w;
        height = h;
        name = n;
    }
    double area() {
        return width * height;
    }

    // constructor
    Shape(double w, double h, string n) {
        width = w;
        height = h;
        name = n;
    }

    // destructor
    ~Shape() {
        cout << "Shape " << name << " destroyed" << endl;
    }

    // private values
    private:
        int id;
};
struct Circle : Shape {
    Circle(double r, string n) : Shape(r, r, n) {}
    double area() {
        return 3.14159 * pow((width / 2), 2);
    }
};

int main() {
    Shape square(10, 10, "Square");
    cout << "Shape area: " << square.area() << endl;
    
    Shape rectangle(10, 20, "Rectangle");
    cout << "Shape area: " << rectangle.area() << endl;

    Circle circle(10, "Circle");
    cout << "Circle area: " << circle.area() << endl;

    return 0;
}