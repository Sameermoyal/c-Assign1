// 11. **Scenario 11: Library Fine Calculation**
// Implement a program for a library that calculates the fine for overdue books. If a book is returned
// after the due date, charge a base fine. If it's returned more than a week late, apply an additional fee.

#include <iostream>
using namespace std;

int main() {
   
    const double baseFine = 2.0; 
    const double additionalFine = 1.0; 

    int daysLate;


    cout << "Enter the number of days the book is late: ";
    cin >> daysLate;


    double fine = baseFine;

    if (daysLate > 7) {
       
        int extraDays = daysLate - 7;
        fine += additionalFine * (extraDays / 7); 
    }


    cout << "The fine for returning the book " << daysLate << " days late is: $" << fine << endl;

    return 0;
}
