#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cmath>
#include <numeric>
using namespace std;

// you can access private members of a class from a friend class (NAME)
class Customer {
    private:
        friend class GetCustomerData;
        string name;
    public:
        Customer (string name) {
            this->name = name;
        }
};

// friend class that accesses private members of Customer (NAME)
class GetCustomerData {
    public:
        void printCustomerName(Customer customer) {
            cout << "Customer name: " << customer.name << endl;
        }
};

int main() {
    // initial class
    Customer customer("John Doe");

    // friend class
    GetCustomerData getCustomerData;

    // access private member of initial class
    getCustomerData.printCustomerName(customer);

    return 0;
}