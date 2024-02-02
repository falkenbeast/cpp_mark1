#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the area using Heron's formula
double calculateArea(double a, double b, double c) {
    // Calculate semi-perimeter
    double s = (a + b + c) / 2.0;

    // Calculate and return the area using Heron's formula
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
    double side1, side2, side3;

    // Input the lengths of the sides
    cout << "Enter the length of side 1: ";
    cin >> side1;

    cout << "Enter the length of side 2: ";
    cin >> side2;

    cout << "Enter the length of side 3: ";
    cin >> side3;

    // Check if the input sides form a valid triangle
    if (side1 + side2 > side3 && side2 + side3 > side1 && side3 + side1 > side2) {
        // Calculate and display the area
        double area = calculateArea(side1, side2, side3);
        cout << "The area of the triangle is: " << area << endl;
    } else {
        cout << "Invalid input. The given sides do not form a valid triangle." << endl;
    }

    return 0;
}