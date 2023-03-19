#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string sQuestion("Enter a number: ");
    string sNum1, sNum2;
    // output question to user
    cout << sQuestion;
    
    // input/receive user input
    cin >> sNum1;
    cout << "Enter Number 2: ";
    cin >> sNum2;
    
    // cast string to int
    int nNum1 = stoi(sNum1);
    int nNum2 = stoi(sNum2);

    // math calculations
    printf("%d + %d = %d\n", nNum1, nNum2, (nNum1 + nNum2));
    printf("%d - %d = %d\n", nNum1, nNum2, (nNum1 - nNum2));
    printf("%d * %d = %d\n", nNum1, nNum2, (nNum1 * nNum2));
    printf("%d / %d = %d\n", nNum1, nNum2, (nNum1 / nNum2));
    printf("%d %% %d = %d\n", nNum1, nNum2, (nNum1 % nNum2));

    // miles to km
    string miles;
    cout << "Enter miles: ";
    cin >> miles;
    // cast string to double
    double nMiles = stod(miles);
    double km = nMiles * 1.60934;
    printf("%.10f miles = %.10f km\n", nMiles, km);

    return 0;
}