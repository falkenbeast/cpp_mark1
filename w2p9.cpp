#include <iostream>
using namespace std;

int main() {
    double currentSalary, raiseAmount, newSalary;
    int performanceRating;

    cout << "Enter current annual salary: ";
    cin >> currentSalary;

    cout << "Enter performance rating (1=excellent, 2=good, 3=poor): ";
    cin >> performanceRating;

    if (performanceRating == 1)
        raiseAmount = 0.06 * currentSalary;
    else if (performanceRating == 2)
        raiseAmount = 0.04 * currentSalary;
    else if (performanceRating == 3)
        raiseAmount = 0.015 * currentSalary;
    else {
        cout << "Invalid performance rating." << endl;
        return 1;
    }

    newSalary = currentSalary + raiseAmount;

    cout << "Raise amount: " << raiseAmount << endl;
    cout << "New salary: " << newSalary << endl;

    return 0;
}
