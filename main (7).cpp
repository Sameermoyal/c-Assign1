// 12. **Scenario 12: Product Discount**
// Design a program for an online store that applies different discounts based on the user's purchase
// history. If a user has made more than 5 purchases, offer a 15% discount; otherwise, provide a
// standard 10% discount.

#include <iostream>
using namespace std;

int main() {
    int purchaseHistory;


    cout << "Enter the number of purchases made: ";
    cin >> purchaseHistory;

    double discount;

   
    if (purchaseHistory > 5) {
        discount = 0.15; 
    } else {
        discount = 0.10; 
    }

   
    double totalPrice;
    cout << "Enter the total price of the items: ";
    cin >> totalPrice;

    double discountedPrice = totalPrice - (totalPrice * discount);


    cout << "Discounted price: $" << discountedPrice << endl;

    return 0;
}
