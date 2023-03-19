#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;
int main() {
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

    return 0;
}