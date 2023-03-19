#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;
int main() {
    srand(time(NULL));
    int randNum = rand() % 100 + 1;
    int i = 0;
    while (i != randNum) {
        i++;
    }
    cout << "The random number is " << randNum << endl;

    int j = 0;
    while (j <= 20) {
        if ((j%2 == 0)) {
            j += 1;
            continue;
        }
        if (j == 15) {
            break;
        }
        cout << j << endl;
        j++;
    }

    // dynamic pine tree
    int height;
    cout << "Enter the height of the tree: ";
    cin >> height;
    int width = (2*height)-1;
    int level = 1;
    while (level <= height) {
        string leaves = "#";
        for (int i = 0; i < level; i++) {
            if (i != 0)
                leaves += "##";
        }
        string output;
        string padding;
        int padCount = (width - leaves.length())/2;
        for (int i = 0; i < padCount; i++) {
            padding += " ";
        }
        output = padding + leaves + padding;
        cout << output << endl;
        level++;
    }
    string padding;
    int padCount = (width - 1)/2;
    for (int i = 0; i < padCount; i++) {
        padding += " ";
    }
    cout << padding + "#" + padding << endl;

    return 0;
}