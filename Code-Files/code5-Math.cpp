#include <cstdlib>
#include <iostream>
#include <string>
// same as java.lang.Math
#include <cmath>
// same as java.util.Random AND java.util.Date
#include <ctime>

using namespace std;
int main() {
    
    //// math evaluations
    // absolute value
    cout << "abs(-10) = " << abs(-10) << endl;
    // max of two numbers
    cout << "max(-10,8) = " << max(-10,8) << endl;
    // min of two numbers
    cout << "min(-10,8) = " << min(-10,8) << endl;
    // max of two floats
    cout << "fmax(53.3, 43.3) = " << fmax(53.3, 43.3) << endl;
    // min of two floats
    cout << "fmin(5.23, 4.23) = " << fmin(5.23, 4.23) << endl;
    // round to higher integer
    cout << "ceil(10.45) = " << ceil(101.45) << endl;
    // round to lower integer
    cout << "floor(10.45) = " << floor(1.45) << endl;
    // round to nearest integer
    cout << "round(6.444) = " << round(6.444) << endl;
    // raise m to power n => 3^5
    cout << "pow(3,5) = " << pow(3,5) << endl;
    // square root of value
    cout << "sqrt(225) = " << sqrt(225) << endl;
    // cube root of value
    cout << "cbrt(64) = " << cbrt(64) << endl;
    // euler's number raised to power n => e^n
    cout << "exp(2) = " << exp(2) << endl;
    // 2^n
    cout << "exp2(2) = " << exp2(2) << endl;
    // natural log of value n => log(e)
    cout << "log(exp(1)) = " << log(exp(1)) << endl;
    // hypotenuse
    cout << "hypot(3,4) = " << hypot(3,4) << endl;

    //// random numbers
    // this returns a random value from 0 to the total number of seconds since 1970
    // seed the random, meaning from 0 to whatever value is inserted into it
    srand(time(NULL));
    // below is a way to get a random number from 0 to 10 including 10
    int secretRand = rand() % 11;
    cout << "Secret Random: " << secretRand << endl;

    return 0;
}