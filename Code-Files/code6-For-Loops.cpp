#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;
int main() {
    for (int i = 0; i < 11; i++) {
        cout << i << endl;
    }

    int arr[] = { 1, 2, 3, 4, 5 };
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    // for-each loop
    for (auto i : arr) {
        cout << i << endl;
    }
    // for loop
    for (int i = 0; i < arrSize; i++) {
        cout << arr[i] << endl;
    }

    int num = 4;
    string isEven = ((num % 2) == 0) ? "even" : "odd";
    cout << num << " is " << isEven << endl;

    // output even or odd for numbers 1 to 20
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) cout << i << " is even" << endl;
        else cout << i << " is odd" << endl;
    }

    // expected interest after 10 years
    int principal;
    int interest;
    cout << "Enter principal: ";
    cin >> principal;
    cout << "Enter interest percentage: ";
    cin >> interest;
    double percentage = interest / 100.0;
    double output;
    for (int i = 1; i <= 10; i++) {
        output = principal * pow(1 + percentage, i);
    }
    cout << "Your earnings after a 10 year period are: " << output << endl;

    return 0;
}