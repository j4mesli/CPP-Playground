#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
int main() {
    string sMiles;
    double miles, km;
    cout << "Enter the distance in miles: ";
    cin >> sMiles;
    miles = stod(sMiles);
    km = miles * 1.60934;
    printf("%.1f miles is equal to %.4f km.", miles, km);

    return 0;
}