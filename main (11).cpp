// Scenario 6: Ticket Pricing
// Develop a program that determines the price of a movie ticket based on the age of the user and the
// time of the movie. If the user is a child (age <= 12), provide a discount. If the movie is a matinee
// (before 5 PM), apply an additional discount.

#include <iostream>
using namespace std;

int main() {
    int age;
    char time;
    double basePrice = 10.0; 

    
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter the movie time (M for Matinee, E for Evening): ";
    cin >> time;

   
    double discount = 0.0;
    if (age <= 12) {
        discount += 2.0; 
    }

   
    if (time == 'M') {
        discount += 1.0;
    }
    
    double totalPrice = basePrice - discount;
    cout << "The price of the movie ticket is: $" << totalPrice << endl;

    return 0;
}
