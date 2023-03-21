#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;
int main() {
    double dNum1, dNum2;
    string sCalc = "";
    vector<string> vecCalc;
    cout << "Enter calculation (5+6) : ";
    getline(cin, sCalc);

    stringstream ssCalc(sCalc);
    string sIndivStr2;
    char cSpace2 = ' ';
    while (getline(ssCalc, sIndivStr2, cSpace2)) {
        vecCalc.push_back(sIndivStr2);
    }
    for (int i = 0; i < vecCalc.size(); i++) {
        cout << vecCalc[i] << endl;
    }
    dNum1 = stod(vecCalc[0]);
    dNum2 = stod(vecCalc[2]);
    string operation = vecCalc[1];
    if (operation == "+") {
        cout << dNum1 << " + " << dNum2 << " = " << dNum1 + dNum2 << endl;
    } 
    else if (operation == "-") {
        cout << dNum1 << " - " << dNum2 << " = " << dNum1 - dNum2 << endl;
    } 
    else if (operation == "*") {
        cout << dNum1 << " * " << dNum2 << " = " << dNum1 * dNum2 << endl;
    } 
    else if (operation == "/") {
        cout << dNum1 << " / " << dNum2 << " = " << dNum1 / dNum2 << endl;
    }

    return 0;
}