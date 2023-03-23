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

int main() {
    vector<int> vecVals = GenerateRandVec(10, 1, 50);
    // sort the vector with lambda expression for INCREASING value
    sort(vecVals.begin(), vecVals.end(), [](int x, int y) {
        return x < y;
    });

    // print the vector
    for (auto v : vecVals) {
        cout << v << endl;
    }

    // sort the vector with lambda expression for DECREASING value
    sort(vecVals.begin(), vecVals.end(), 
    [](int x, int y) {
        return x > y;
    });

    // print the vector
    for (auto v : vecVals) {
        cout << v << endl;
    }

    vector<int> evenVals;

    // this is the same as .filter() in JS/TS
    // back_inserter() is a function that adds the values to the end of the vector
    copy_if(vecVals.begin(), vecVals.end(), back_inserter(evenVals), 
    [](int x) {
        return x % 2 == 0;
    });

    for (auto v : evenVals) {
        cout << v << endl;
    }

    // sum variables
    int sum = 0;
    // this is the same as .reduce() in JS/TS
    for_each(vecVals.begin(), vecVals.end(), 
    [&](int x) {
        sum += x;
    });
    cout << "Sum: " << sum << endl;

    return 0;
}