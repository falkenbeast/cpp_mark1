#include <iostream>
using namespace std;

int main() {
    const double acceleration = 32.0;
    double time, distance;

    cout << "Enter time in seconds: ";
    cin >> time;

    distance = 0.5 * acceleration * time * time;

    cout << "Distance fallen: " << distance << " feet" << endl;

    return 0;
}
