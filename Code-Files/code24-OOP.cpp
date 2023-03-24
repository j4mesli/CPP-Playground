#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Animal {
    private:
        string name;
        double height;
        double weight;

        static int numOfAnimals; 

    public:
        // methods
        string getName() { return name; }
        void setName(string name) { this->name = name; }
        double getHeight() { return height; }
        void setHeight(double height) { this->height = height; }
        double getWeight() { return weight; }
        void setWeight(double weight) { this->weight = weight; }
        void setAll(string name, double height, double weight) {
            this->name = name;
            this->height = height;
            this->weight = weight;
        };
        void toString() {
            cout << "Animal " << this->name << " is " << this->height << " cm tall and " << this->weight << " kg in weight" << endl;
        }
        static int getNumOfAnimals() { return numOfAnimals; }

        // Constructor
        Animal(string name, double height, double weight) {
            this->name = name;
            this->height = height;
            this->weight = weight;
            Animal::numOfAnimals++;
        }
        Animal() {
            this->name = "";
            this->height = 0;
            this->weight = 0;
            Animal::numOfAnimals++;
        }

        // Destructor (Remove from Mmory)
        ~Animal() {
            cout << "Animal " << this->name << " destroyed" << endl;

        };
};

int Animal::numOfAnimals = 0;

int main() {
    Animal fred;
    fred.setName("Fred");
    fred.setHeight(33);
    fred.setWeight(10);
    
    fred.toString();
    fred.setAll("Fred", 24, 12);
    fred.toString();

    Animal tom("Tom", 36, 15);
    tom.toString();

    cout << "Number of Animals: " << Animal::getNumOfAnimals() << endl;

    return 0;
}