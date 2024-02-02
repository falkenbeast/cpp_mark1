#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    // Input two integers
    cout << "Enter the first integer: ";
    cin >> num1;

    cout << "Enter the second integer: ";
    cin >> num2;

    // Calculate the sum
    int sum = num1 + num2;

    // Display the sum
    cout << "Sum: " << sum << endl;

    // Count the number of digits in the sum
    int count = 0;
    int tempSum = abs(sum);  // Take the absolute value in case the sum is negative

    while (tempSum > 0) {
        tempSum /= 10;
        count++;
    }

    // Display the number of digits in the sum
    cout << "Number of digits in the sum: " << count << endl;

    return 0;
}