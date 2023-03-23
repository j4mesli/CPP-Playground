#include <cstdlib>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    char aChar = 'A';
    int aInt = aChar;
    cout << "Ascii code for " << aChar << " is " << aInt << endl;
    // cast char to ascii
    cout << "Ascii code for 'a' is " << (int)'a' << endl;

    // convert int to string
    string strNum = to_string(1+2);
    cout << "strNum: " << strNum << endl;

    // receive uppercase letters, change to ascii, change to original
    string original, input, secret;
    cout << "Enter a string: ";
    cin >> input;
    transform(input.begin(), input.end(), input.begin(), ::toupper);
    for (auto c : input) {
        secret += to_string((int)c);
    }
    original = "";
    cout << "Secret String: " << secret << endl;
    for (int i = 0; i < secret.length(); i += 2) {
        string temp = "";
        temp += secret[i];
        temp += secret[i+1];
        int charCode = stoi(temp);
        char c = charCode;
        original += c;
    }
    cout << "Original String: " << original << endl;

    return 0;
}