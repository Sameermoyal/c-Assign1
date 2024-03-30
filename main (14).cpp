// Scenario 3: Grade Classification
// Design a program that takes a student's numerical grade as input and outputs their corresponding
// letter grade. Use if-else statements to categorize the grades as 'A', 'B', 'C', 'D', or 'F'.

#include <iostream>
using namespace std;

int main() {
    double numericalGrade;

  
    cout << "Enter the numerical grade: ";
    cin >> numericalGrade;


    char letterGrade;
    if (numericalGrade >= 90.0) {
        letterGrade = 'A';
    } else if (numericalGrade >= 75.0) {
        letterGrade = 'B';
    } else if (numericalGrade >= 60.0) {
        letterGrade = 'C';
    } else if (numericalGrade >= 40.0) {
        letterGrade = 'D';
    } else {
        letterGrade = 'F';
    }

    
    cout << "Corresponding letter grade: " << letterGrade << endl;

    return 0;
}
