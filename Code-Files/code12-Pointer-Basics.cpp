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

void AssignAge(int *age);
void DoubleArray(int *array, int size);

int main() {
    int age = 43;
    // create a pointer to the age variable
    int *pAge = NULL;
    // create a reference to the age variable and assign it to the pointer
    pAge = &age;

    // outputs address as a hexadecimal number
    cout << "Address of pointer pAge: " << pAge << endl;
    cout << "Value of pointer pAge: " << *pAge << endl;

    int intArray[] = {1, 2, 3, 4, 5};
    int* pIntArray = intArray;
    cout << "First element: " << *pIntArray << " address: " << pIntArray << endl;
    pIntArray++;
    cout << "Second element: " << *pIntArray << " address: " << pIntArray << endl;
    pIntArray += 2;
    cout << "Fourth element: " << *pIntArray << " address: " << pIntArray << endl;
    pIntArray -= 3;
    cout << "First element: " << *pIntArray << " address: " << pIntArray << endl;

    // pass the pointer to a function, so it can directly reference it
    AssignAge(pAge);
    cout << "Age: " << age << endl;

    // pass an array into a function
    int arr[] = {1,2,3,4,5,6};
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    DoubleArray(arr, arrSize);
    cout << "Array: " << arr[0] << ", " << arr[1] << ", " << arr[2] << ", " << arr[3] << ", " << arr[4] << ", " << arr[5] << endl;

    return 0;
}

void AssignAge(int* age) {
    *age = 24;
}
void DoubleArray(int *array, int size) {
    // passing an array into the function
    for (int i = 0; i < size; i++) {
        array[i] = array[i] * 2;
    }
}