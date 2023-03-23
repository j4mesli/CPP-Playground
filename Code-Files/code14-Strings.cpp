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
    char cString[] = {'H', 'e', 'l', 'l', 'o', '\0'};

    cout << cString << endl;
    cout << "Array size: " << sizeof(cString) << endl;

    vector<string> strVec(10);
    string str("I'm a string");
    strVec[0] = str;
    // get char at particular index
    cout << str.at(5) << endl;
    // get first char
    cout << str.front() << endl;
    // get last char
    cout << str.back() << endl;
    // get string length
    cout << str.length() << endl;

    // create a copy of a string
    string str2(str);
    strVec[1] = str2;
    // create a substring of [4::]
    string str3(str, 4);
    strVec[2] = str3;

    // create a string of 5 'x' chars
    string str4(5, 'x');
    strVec[3] = str4;

    // append a string to another
    strVec[4] = str + " and I am happy";

    // append a substring to a string
    str.append(34,37);
    strVec[5] = str;

    // erase a substring from a string
    str.erase(13, str.length()-1);
    strVec[6] = str;
    for (auto s : strVec) {
        cout << s << endl;
    }

    // this is the same as  if (!str.includes("string")) {  }
    if (str.find("string") != string::npos) {
        cout << "Found string " << str.find("string") << endl;
    }

    // get a substring of a string
    cout << "substring: " << str.substr(0, 5) << endl;

    // reverse a string
    reverse(str.begin(), str.end());
    cout << "reverse: " << str << endl;

    // case conversion
    transform(str2.begin(), str2.end(), str2.begin(), ::toupper);
    cout << "Change all chars into all caps: " << str2 << endl;
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    cout << "Change all chars into lowercase: " << str2 << endl;

    // get ascii code for character
    // A-Z : 65-90
    // a-z : 97-122

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