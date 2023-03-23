#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <cmath>
using namespace std;

void PrintHorizontalVector(const vector<int>& v, int row = 0, size_t index = 0) {
    if (index >= v.size()) {
        if (row < 4) {
            cout << endl;
            PrintHorizontalVector(v, row + 1);
        }
        return;
    }

    switch (row) {
        case 0:
        case 2:
        case 4:
            cout << "-------  ";
            break;
        case 1:
            cout << "|  " << index << "  |  ";
            break;
        case 3:
            cout << "|  " << v[index] << "  |  ";
            break;
    }

    PrintHorizontalVector(v, row, index + 1);
}

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    // Print a vector horizontally
    vector<int> v = {1, 2, 3, 4, 5};
    PrintHorizontalVector(v);
    cout << endl;

    // Print the first 10 fibonacci numbers
    for (int i = 0; i < 10; ++i) {
        cout << "fibonacci(" << i << ") = " << fibonacci(i) << endl;
    }

    return 0;
}