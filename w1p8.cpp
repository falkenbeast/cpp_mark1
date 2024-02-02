#include <iostream>

using namespace std;

int main() {
    double celsius, fahrenheit;

    // Input temperature in degrees Celsius
    cout << "Enter temperature in degrees Celsius: ";
    cin >> celsius;

    // Convert Celsius to Fahrenheit using the formula
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;

    // Display the converted temperature in degrees Fahrenheit
    cout << "Temperature in degrees Fahrenheit: " << fahrenheit << endl;

    return 0;
}