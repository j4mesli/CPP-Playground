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
int main() {
    vector<int> vecRandomNums(2);
    vecRandomNums[0] = 10;
    vecRandomNums[1] = 20;

    // add new element past last element
    vecRandomNums.push_back(30);

    // get size
    cout << "Size: " << vecRandomNums.size() << endl;

    // get last element
    cout << "Last element: " << vecRandomNums[vecRandomNums.size() - 1] << endl;

    // iterator
    vector<int>::iterator it;
    // find element '20' in vector
    it = find(vecRandomNums.begin(), vecRandomNums.end(), 20);
    cout << *it << endl;

    // turn a string into a vector of words
    string sSentence = "This is a sentence.";
    vector<string> vecSentence;
    stringstream ss(sSentence);

    string sIndivStr;
    char cSpace = ' ';
    // gets each item in the stringstream and puts it into the vector
    while (getline(ss, sIndivStr, cSpace)) {
        vecSentence.push_back(sIndivStr);
    }

    for (int i = 0; i < vecSentence.size(); i++) {
        cout << vecSentence[i] << endl;
    }

    // Enter calculation (5+6) : 10 - 6
    // provide output 10-6.0 = 4.0
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