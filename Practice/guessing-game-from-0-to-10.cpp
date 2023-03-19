#include <cstdlib>
#include <iostream>

// while loop version of "code8-Do-While-Loop.cpp"
using namespace std;
int main() {
    int secretNum = rand() % 11;
    int guess;
    while (true) {
        cout << "Guess a number between 0 and 10: ";
        cin >> guess;
        if (guess > secretNum) {
            cout << "Too big!" << endl;
        }
        else if (guess < secretNum) {
            cout << "Too small!" << endl;
        }
        else {
            cout << "You guessed " << secretNum << " correctly!" << endl;
            break;
        }
    }

    return 0;
}