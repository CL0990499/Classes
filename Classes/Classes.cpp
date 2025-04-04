#include <iostream>
#include <string>
#include <vector> // Needed for using std::vector
using namespace std; // Prevents us from having to use "std::"

// Defining a simple Car class
class Car {
public:
    // Public attributes for now; we will discuss "private" and "protected" next week
    string VIN; // Vehicle Identification Number (should be unique for each car)
    string make; // Car brand (e.g., Toyota, Ford)
    string model; // Specific model (e.g., Corolla, Mustang)
    int year; // Manufacturing year
    double mileage; // Current mileage of the car
    vector<string> owners; // List of previous and current owners

    // Constructor to initialize a Car object
    Car(string vin, string mk, string mdl, int yr, double miles, vector<string> ownerList) {
        VIN = vin;
        make = mk;
        model = mdl;
        year = yr;
        mileage = miles;
        owners = ownerList;
    }

    // Function to display car details
    void displayInfo() {
        cout << "VIN: " << VIN << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Mileage: " << mileage << " miles" << endl;

        // Displaying owners
        cout << "Owners: ";
        for (const string& owner : owners) {
            cout << owner << " ";
        }
        cout << endl;
    }
};

int main() {
    // Create a vector of four previous owners
    vector<string> previousOwners = { "Jack Black", "Evan Smith", "Arnold Johnson", "Bobby Brown" };

    // Instantiate a Car object with the constructor, including the owner list
    Car myCar("1HGBH41JXMN109186", "Toyota", "Corolla", 2013, 250659, previousOwners);

    // Call the displayInfo method to print the car details
    myCar.displayInfo();

    return 0;
}

/*
Attributes that should be private:
- VIN: The VIN should be private because the sharing the VIN can lead to identity theft as the VIN is connected to the name and address on the registration.
- Owners: The list of owners should be private to avoid unauthorized or incorrect changes to the ownership history of the car.
*/
