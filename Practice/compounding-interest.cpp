#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
int main() {
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