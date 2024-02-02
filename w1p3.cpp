#include <iostream>

int main() {
    int number;

    // Input a single-digit number
    std::cout << "Enter a single-digit number: ";
    std::cin >> number;

    // Check if the input is a single-digit number
    if (number < 0 || number > 9) {
        std::cerr << "Please enter a valid single-digit number." << std::endl;
        return 1; // Exit with an error code
    }

    // Print the number in a rectangular form with an inner rectangle empty
    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (i > 0 && i < 5 && j > 0 && j < 3) {
                std::cout << "  "; // Empty space for the inner rectangle
            } else {
                std::cout << number << ' ';
            }
        }
        std::cout << std::endl;
    }

    return 0; // Exit successfully
}