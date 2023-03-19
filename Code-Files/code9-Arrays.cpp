#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
#include <ctime>
// import array library
#include <array>

using namespace std;

// ARRAYS ARE NOT RESIZABLE, VECTORS ARE
int main() {
    // different ways to declare arrays in vanilla C++
    int arrNums[10] = { 1 };
    int arrNums2[] = { 1,2,3 };
    int arrNums3[5] = { 1,2 };
    
    cout << "1st value of arrNums3 = " << arrNums3[0] << endl;
    arrNums3[0] = 7;
    cout << "1st value of arrNums3 = " << arrNums3[0] << endl;

    // fetch arr size
    // // obtained by dividing the number of bytes associated with the array by the number of bytes associated with a single element
    int arr3Size = sizeof(arrNums3) / sizeof(*arrNums3); // we can use a pointer to the array instead of sizeof(arrNums3[0])
    cout << "arrNums3 size = " << arr3Size << endl;

    for (auto i : arrNums2) {
        cout << i << endl;
    }

    int arr2Size = sizeof(arrNums2) / sizeof(*arrNums2);
    for (int i = 0; i < arr2Size; i++) {
        cout << arrNums2[i] << endl;
    }

    //// ARRAY LIBRARY
    // declare with syntax of <type, size>
    array<int, 5> arrNums4 = { 1,2,3,4,5 };
    for (auto i = arrNums4.begin(); i != arrNums4.end(); i++) {
        // you need the pointer preference '*i' to get the value, because each i is an address to the memory location
        cout << " " << *i;
    }
    cout << "\n";

    // get array size with the array library
    cout << "arrNums4 size = " << arrNums4.size() << endl;
    // get max size of array
    cout << "arrNums4 size = " << arrNums4.max_size() << endl;
    // isEmpty
    cout << "arrNums4 is empty = " << (arrNums4.empty() ? "true" : "false") << endl;
    // bracket notation of first value
    cout << "arrNums4[0] = " << arrNums4[0] << endl;
    // another way to get first value, obtained by index
    cout << "arrNums4[0] = " << arrNums4.at(0) << endl;
    // fill all values of an array with a value
    arrNums4.fill(5);

    array<int, 5> arrNums5 = { 1,2,3,4,5 };
    // swap two arrays
    arrNums5.swap(arrNums4);
    for (auto i : arrNums5) {
        cout << i << endl;
    }

    // multidimensional arrays  
    int arrNums6[2][2][2] = { { { 1,2 }, { 3,4 }  }, { { 5,6 }, { 7,8 } } };
    cout << "arrNums6[1][1][1] = " << arrNums6[1][1][1] << endl;

    return 0;
}