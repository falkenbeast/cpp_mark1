#include <iostream>
using namespace std;

int main() {
    double radius, volume;
    const double pi = 3.14;

    cout << "Enter the radius of the globe: ";
    cin >> radius;

    volume = (4.0 / 3.0) * pi * radius * radius * radius;

    cout << "Volume of the globe: " << volume << endl;

    return 0;
}
