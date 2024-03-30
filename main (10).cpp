// 9. **Scenario 9: Temperature Classification**
// Write a program that classifies the temperature into different categories (cold, moderate, hot). Use
// relational operators to compare the temperature input and categorize it accordingly.

#include <iostream>
using namespace std;

int main() {
    double temperature;

   
    cout << "Enter the temperature: ";
    cin >> temperature;

    if (temperature < 10.0) {
        cout << "Cold" << endl;
    } else if (temperature >= 10.0 && temperature < 25.0) {
        cout << "Moderate" << endl;
    } else {
        cout << "Hot" << endl;
    }

    return 0;
}
