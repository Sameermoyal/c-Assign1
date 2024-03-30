// Scenario 4: Shipping Charges
// Write a C++ program that calculates shipping charges based on the weight of a package. If the weight
// is less than or equal to 5 pounds, apply a flat rate; otherwise, charge an additional fee per pound for
// weights exceeding 5 pounds.

#include <iostream>
using namespace std;

int main() {
    double weight;
    double flatRate = 5.0; 
    double additionalFeePerPound = 1.5; 
    double shippingCharge;

 
    cout << "Enter the weight of the package (in pounds): ";
    cin >> weight;


    if (weight <= 5.0) {
        shippingCharge = flatRate; 
    } else {
        shippingCharge = flatRate + (weight - 5.0) * additionalFeePerPound; 
    }


    cout << "Shipping charge: $" << shippingCharge << endl;

    return 0;
}
