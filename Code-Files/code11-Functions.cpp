#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
#include <array>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

// must define the prototype of the function
double addNumbers(double num1, double num2);
void assignAge(int *age);

int main() {
    double num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << num1 << " + " << num2 << " = " << addNumbers(num1, num2) << endl;

    int age = 43;
    int *rAge = &age;
    assignAge(rAge);
    cout << "Age: " << age << endl;

    return 0;
}

double addNumbers(double num1 = 0, double num2 = 0) {
    return num1 + num2;
}
void assignAge(int *age) {
    *age = 24;
}