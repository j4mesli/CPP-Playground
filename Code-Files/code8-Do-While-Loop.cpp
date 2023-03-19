#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>

using namespace std;
int main() {
    srand(time(NULL));
    int secretNum = rand() % 11;
    int guess;

    // do-while will always run at least once, vs while which may not run at all
    do {
        cout << "Guess a number between 0 and 10: ";
        cin >> guess;
        if (guess > secretNum) {
            cout << "Too big!" << endl;
        }
        else if (guess < secretNum) {
            cout << "Too small!" << endl;
        }
    } while (guess != secretNum);

    cout << "You guessed " << secretNum << " correctly!" << endl;
    
    // while loop version of above logic
    secretNum = rand() % 11;
    guess;
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