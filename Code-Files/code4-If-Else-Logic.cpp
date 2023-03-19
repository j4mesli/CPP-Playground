#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;

int main() {
    // conditional operators
    // // important birthdays
    // // 1-18,21,50,65+
    string sAge = "0";
    cout << "Enter your age: ";
    cin >> sAge;
    int nAge = stoi(sAge);
    if (nAge >= 1 && nAge <= 18) {
        cout << "Your birthday is important!" << endl;
    }
    else if (nAge == 21 || nAge == 50) {
        cout << "Your birthday is important!" << endl;
    }
    else if (nAge >= 65) {
        cout << "Your birthday is important!" << endl;
    }
    else {
        cout << "Your birthday is not important!" << endl;
    }

    // Determine School Age
    string sGrade;
    cout << "Enter your grade: ";
    cin >> sGrade;
    int nGrade = stoi(sGrade);
    switch (nGrade) {
        case 5:
            cout << "Go to Elementary School" << endl;
            break;
        case 6 ... 17:
            cout << "Go to Elementary School" << endl;
            break;
        
        default:
            if (nGrade > 17) cout << "Go to College" << endl;
            else cout << "Too young for school" << endl;
            break;
    }

    // Ternary Operator
    int age = 43;
    bool canIVote = (age >= 18) ? true : false;
    // do this to output 'true'/'false' instead of '1'/'0'
    cout.setf(ios::boolalpha);
    cout << "Can he vote? " << canIVote << endl;

    return 0;
}