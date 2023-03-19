#include <cstdlib>
#include <iostream>
// for string data-type
#include <string>
// for min/max of values
#include <limits>

using namespace std;
// Hungarian notation, with "g_i" meaning global int
int g_iRandInt = 0;
// const, like JS/TS
const double PI = 3.1415926535;

int main(int argsc, char* argsv[]) {
    bool bMarried = true;
    char chMyGrade = 'A';
    // generic int means \forall n \in \mathbb{Z} : -2147483648 \leq n \leq 2147483647
    int nDays = 7;
    // "unsigned" means \forall n \in \mathbb{N} 
    unsigned short int u16Age = 43;
    // "short" means \forall n \in \mathbb{Z} : -32768 \leq n \leq 32767
    short int siWeight = 180;
    // "long" like Java
    long lBigNum = 11000000;
    
    // only precise to 6 decimal places
    float fPi = 3.14159;
    // ex: 
    const float fBigFloat = 1.11111111;
    const float fBigFloat2 = 1.11111111;
    const float fBigFloat3 = fBigFloat + fBigFloat2;

    // printf is print with format
    // this format is "f" for float, and ".10" means show 10 decimal places
    printf("fBigFloat3 = %.10f\n", fBigFloat3);

    // basically prints "Double.MAX_DOUBLE"
    cout << "Min Double: " << numeric_limits<double>::min() << endl;
    cout << "Max Double: " << numeric_limits<double>::max() << endl;
    // basically prints "Integer.MAX_INTEGER"
    cout << "Min Integer: " << numeric_limits<int>::min() << endl;
    cout << "Max Integer: " << numeric_limits<int>::max() << endl;
    // basically prints "Float.MAX_FLOAT"
    cout << "Min Float: " << numeric_limits<float>::min() << endl;
    cout << "Max Float: " << numeric_limits<float>::max() << endl;
    // basically prints "Double.MAX_DOUBLE"
    cout << "Min Double: " << numeric_limits<double>::min() << endl;
    cout << "Max Double: " << numeric_limits<double>::max() << endl;
 
    // doubles have 15 points of precision compared to floats' 6
    // ex: 
    const double dbBigDouble = 1.111111111111111111111111;
    const double dbBigDouble2 = 1.111111111111111111111111;
    const double dbBigDouble3 = dbBigDouble + dbBigDouble2;
    
    // printf is print with format
    // this format is "db" for double, and ".20" means show 20 decimal places
    printf("dbBigDouble3 = %.20f\n", dbBigDouble3);

    long double ldPi = 3.141592653589793238;
    // compiler will automatically determine the type of the variable, very fun
    auto whatWillIBe = true;

    // get the number of bytes in the variable
    cout << "Int Size:" << sizeof(int) << endl;

    // this format is as follows:
    // %c for char, %d for int, %5d for int with 5 spaces, %.3f for float with 3 decimal places, %s for string
    printf("%c %d %5d %.3f %s", 'A', 10, 5, 3.141, "Hi!");

    return 0;
}