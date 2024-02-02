#include <iostream>
#include <iomanip>
#include <cmath>

// Function to format the output
std::string format_output(double value, int width, int decimal_places) {
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(decimal_places);
    oss << "The value of pi " << decimal_places << " decimal place of total width " << std::setw(width)
        << " : |" << std::setw(width - 1) << value << "|";
    return oss.str();
}

int main() {
    double pi_value = M_PI;
    int status_number = 0;
    bool status_alphabet = false;

    std::cout << "The value of pi : " << std::fixed << std::setprecision(4) << pi_value << std::endl;
    std::cout << format_output(pi_value, 8, 4) << std::endl;
    std::cout << format_output(pi_value, 10, 4) << std::endl;
    std::cout << format_output(-pi_value, 8, 4) << std::endl;
    std::cout << format_output(-pi_value, 10, 4) << std::endl;
    std::cout << "The value of pi in scientific format is : " << std::scientific << std::setprecision(4) << pi_value << std::endl;
    std::cout << "Status in number : " << status_number << std::endl;
    std::cout << "Status in alphabet : " << std::boolalpha << status_alphabet << std::endl;
     
    return 0;
}
