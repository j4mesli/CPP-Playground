#include <cstdlib>
#include <iostream>

// main function
using namespace std;
int main(int argc, char* argv[]) {
    cout << "Hello, world!" << std::endl;

    // fetch user input w/ interactive code
    std::string input;
    double dMiles, dKilometers;

    std::cout << "Enter Miles: ";
    // gets the user input from terminal line
    getline(cin, input);
    // converts the string to a double
    dMiles = std::stod(input);
    dKilometers = dMiles * 1.60934;
    // prints the result with format "%.2f" meaning 2 decimal places
    printf("%.2f miles is equal to %.2f kilometers", dMiles, dKilometers);
    return 0;
}