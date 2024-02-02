#include <iostream>
using namespace std;

int main() {
    const double compensationRate = 0.115;
    double previousAnnualSalary, newAnnualSalary, oldMonthlySalary, newMonthlySalary, compensationPay;

    cout << "Enter employee's previous annual salary: ";
    cin >> previousAnnualSalary;

    compensationPay = previousAnnualSalary * compensationRate;
    newAnnualSalary = previousAnnualSalary + compensationPay;
    oldMonthlySalary = previousAnnualSalary / 12.0;
    newMonthlySalary = newAnnualSalary / 12.0;

    cout << "New annual salary: " << newAnnualSalary << endl;
    cout << "New monthly salary: " << newMonthlySalary << endl;
    cout << "Old monthly salary: " << oldMonthlySalary << endl;
    cout << "Compensation pay received: " << compensationPay << endl;

    return 0;
}
