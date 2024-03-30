// Scenario 5: Discount Calculation
// You are working for an e-commerce platform. Implement a program that calculates the total cost of
// an order after applying discounts. If the order amount is greater than $50 and the user is a premium
// member, provide a 10% discount; otherwise, provide a 5% discount.

#include <iostream>
using namespace std;

int main() {
    double orderAmount;
    char membershipStatus;
    double discountPercentage;

   
    cout << "Enter the order amount: $";
    cin >> orderAmount;
    cout << "Are you a premium member? y : n ";
    cin >> membershipStatus;


    if (orderAmount > 50.0 && membershipStatus == 'y') {
        discountPercentage = 0.10; 
    } else {
        discountPercentage = 0.05; 
    }

    double discountAmount = orderAmount * discountPercentage;

    double totalCost = orderAmount - discountAmount;


    cout << "Total cost after applying discount: $" << totalCost << endl;

    return 0;
}
