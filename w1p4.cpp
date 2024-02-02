#include <iostream>

int main() {
    int number;

    // Get user input
    std::cout << "Print the multiplication table of a number up to 10:" << std::endl;
    std::cout << "--------------------------------------------------------" << std::endl;
    std::cout << "Input a number: ";
    std::cin >> number;

    // Print multiplication table
    std::cout << std::endl << "Multiplication table for " << number << ":" << std::endl;
    for (int i = 1; i <= 10; ++i) {
        std::cout << number << " x " << i << " = " << (number * i) << std::endl;
    }

    return 0;
}
