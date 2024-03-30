
// 10. **Scenario 10: Exam Pass/Fail**
// Develop a program that determines whether a student passes or fails an exam based on the input
// marks. If the student scores 40% or more, consider it a pass; otherwise, mark it as a fail.
#include <iostream>
using namespace std;

int main() {
    double marks;

  
    cout << "Enter the marks obtained by the student: ";
    cin >> marks;

   
    if (marks >= 40.0) {
        cout << "The student has passed the exam." << endl;
    } else {
        cout << "The student has failed the exam." << endl;
    }

    return 0;
}
