#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <cmath>
using namespace std;

int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n-1);
}
void PrintHorizontalVector(const vector<int>& v) {
    for (size_t i = 0; i < v.size(); ++i) {
        cout << "-------  ";
    }
    cout << endl;

    for (size_t i = 0; i < v.size(); ++i) {
        cout << "|  " << i << "  |  ";
    }
    cout << endl;

    for (size_t i = 0; i < v.size(); ++i) {
        cout << "-------  ";
    }
    cout << endl;

    for (size_t i = 0; i < v.size(); ++i) {
        cout << "|  " << v[i] << "  |  ";
    }
    cout << endl;

    for (size_t i = 0; i < v.size(); ++i) {
        cout << "-------  ";
    }
    cout << endl;
}

int main() {
    // Factorial of 3 = 3 * 2 * 1
    cout << "Factorial of 3: " << factorial(3) << endl;
    cout << "Factorial of 5: " << factorial(5) << endl;
    cout << "6! = " << factorial(6) << endl;

    // Print a vector horizontally
    vector<int> v = {1, 2, 3, 4, 5};
    PrintHorizontalVector(v);

    return 0;
}