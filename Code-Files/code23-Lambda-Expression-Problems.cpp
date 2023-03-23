#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <numeric>
#include <sstream>
#include <ctime>
#include <cmath>
#include <algorithm>
using namespace std;

// generate a random vector of length 'n'
vector<int> GenerateRandVec(int numOfNums, int min, int max) {
    vector<int> vecValues;
    srand(time(NULL));
    int i = 0, randVal = 0;
    while (i < numOfNums) {
        randVal = min + rand() % ((max + 1) - min);
        vecValues.push_back(randVal);
        i++;
    }
    return vecValues;
}
// generate a list of fibonacci numbers to index 'n'
vector<int> GenerateFibList(int index) {
    vector<int> fibList;
    int i = 0;
    while (i < index) {
        if (i == 0) {
            fibList.push_back(0);
        }
        else if (i == 1) {
            fibList.push_back(1);
        }
        else {
            fibList.push_back(fibList[i-1] + fibList[i-2]);
        }
    }
}

int main() {
    vector<int> vecValues = GenerateRandVec(10, 1, 50);
    vector<int> divisibleVals;

     // print the original vector values
    for (auto v : vecValues) {
        cout << v << endl;
    }
    // dynamic list that consists of values that are divisible by any given value 'n'
    int divisor;
    cout << "Enter a number to divide the vector by: ";
    cin >> divisor;
    // this is the same as .filter() in JS/TS
    // back_inserter() is a function that adds the values to the end of the vector
    copy_if(vecValues.begin(), vecValues.end(), back_inserter(divisibleVals), 
    // you need to put the 'divisor' value in if you're using it
    // like how useEffect requires it in react
    [divisor](int x) {
        return x % divisor == 0;
    });

    // print the new vector values
    for (auto v : divisibleVals) {
        cout << v << endl;
    }

    // vector of fibonacci numbers
    vector<int> fibVals = GenerateFibList(10);
    
    // print the fibonacci numbers
    for (auto v : fibVals) {
        cout << v << endl;
    }

    return 0;
}