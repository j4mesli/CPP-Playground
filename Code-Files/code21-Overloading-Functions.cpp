#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <cmath>
using namespace std;

// two functions, intake diff. parameters, return same type
double Area(double radius) {
    return 3.141592653589793238463 * pow(radius, 2);
}
double Area(double length, double width) {
    return length * width;
}

int main() {
    cout << "Area of circle (c) or Area of rectangle (r): ";
    char choice;
    cin >> choice;
    switch(choice) {
        case 'c':
            cout << "Enter radius: ";
            double radius;
            cin >> radius;
            cout << "Area of circle: " << Area(radius) << endl;
            break;
        case 'r':
            cout << "Enter length: ";
            double length;
            cin >> length;
            cout << "Enter width: ";
            double width;
            cin >> width;
            cout << "Area of rectangle: " << Area(length, width) << endl;
            break;
        default:
            cout << "Invalid choice, terminating program!" << endl;
            break;
    }

    return 0;
}