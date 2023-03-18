// same as "java.lang.*"
#include <cstdlib>
// same as "import java.io.*"
#include <iostream>

// using standard namespace & standard output stream
using namespace std;

// like C's main(), but with argc & argv, 
// argc is the number of arguments passed to the program and
// argv is an array of pointers to these arguments
int main(int argc, char* argv[]) {
    // same as System.out.println("Hello, world!");
    cout << "Hello, world!" << endl;

    // if the user passes in an argument(s), print it
    if (argc != 1) {
        cout << "You entered" << argc << "arguments.\n";
        for (int i = 0; i < argc; i++) {
            cout << "Argument " << i << " is " << argv[i] << endl;
        }
    }
    return 0;
}

// compile from command line:
// g++ -o code1-Basics code1-Basics.cpp == javac code1-Basics.java
// ./code1-Basics == java code1-Basics
// // you can run "./code1-Basics ${ args }" to pass in arguments