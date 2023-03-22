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
// range from python
// DEFINE DEFAULT VALUE IN PROTOTYPE
vector<int> range(int start, int end, int step = 1);

int main() {
    vector<int> _range;
    _range = range(1, 10);
    for (auto i : _range) {
        cout << i << endl;
    }

    double num1, num2 = 0;
    cout << "Enter a number: ";
    cin >> num1;
    cout << "Enter another number: ";
    cin >> num2;

    // exception handling, try to execute the code in the try block
    try {
        if (num2 == 0) {
            throw "Division by zero is not allowed";  
        }
        else {
            cout << num1 / num2 << endl;
        }
    }
    // exception is a const char pointer
    catch(const char* exception) {
        cout << "Error: " << exception << endl;
    }

    try {
        cout << "Throwing exception" << endl;
        // throw custom exception of type runtime_error
        throw runtime_error("This is a runtime error");
        cout << "I shall never be reached!" << endl;
    }
    // catch custom exception, always catch by reference
    catch(exception &e) {
        cout << "Error: " << e.what() << endl;
    }
    // catch-all for exceptions
    catch(...) {
        cout << "Error: An unknown exception occurred!" << endl;
    }

    return 0;
}

vector<int> range(int start, int end, int step) {
    int i = start;
    vector<int> output;
    while (i <= end) {
        output.push_back(i);
        i += step;
    }
    return output;
}