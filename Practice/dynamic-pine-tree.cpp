#include <cstdlib>
#include <iostream>

using namespace std;
int main() {
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