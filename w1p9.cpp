#include <iostream>

using namespace std;

int main() {
    int numerator1, denominator1, numerator2, denominator2;

    // Input the first fraction
    cout << "Enter the first fraction in the form 'a/b': ";
    cin >> numerator1;
    cin.ignore(); // Ignore the '/' character
    cin >> denominator1;

    // Input the second fraction
    cout << "Enter the second fraction in the form 'c/d': ";
    cin >> numerator2;
    cin.ignore(); // Ignore the '/' character
    cin >> denominator2;

    // Calculate the sum of fractions
    int sumNumerator = numerator1 * denominator2 + numerator2 * denominator1;
    int sumDenominator = denominator1 * denominator2;

    // Display the sum in fractional form
    cout << "Sum = " << sumNumerator << "/" << sumDenominator << endl;

    return 0;
}