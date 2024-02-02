#include <iostream>
#include <iomanip>

int main() {
    // a. Left-justify the number 0.123456 in an output field with a width of 15.
    std::cout << "a. Left-justified output: |" << std::left << std::setw(15) << 0.123456 << "|" << std::endl;

    // b. Output the number 23.987 as a fixed point number rounded to two decimal places,
    //    right-justifying the output in a field with a width of 12.
    std::cout << "b. Right-justified fixed point output: |" << std::right << std::setw(12) << std::fixed << std::setprecision(2) << 23.987 << "|" << std::endl;

    // c. Output the number –123.456 as an exponential and with four decimal spaces.
    //    How useful is a field width of 10?
    std::cout << "c. Exponential output with width 10: |" << std::setw(10) << std::scientific << std::setprecision(4) << -123.456 << "|" << std::endl;

    return 0;
}
