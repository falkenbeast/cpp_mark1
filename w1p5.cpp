#include <iostream>
#include <cmath>

const double RADIUS_OF_EARTH = 6371.0;  // Earth's radius in kilometers

// Function to convert degrees to radians
double toRadians(double degree) {
    return degree * (M_PI / 180.0);
}

// Function to calculate the distance using Haversine formula
double calculateDistance(double lat1, double lon1, double lat2, double lon2) {
    lat1 = toRadians(lat1);
    lon1 = toRadians(lon1);
    lat2 = toRadians(lat2);
    lon2 = toRadians(lon2);

    double dlat = lat2 - lat1;
    double dlon = lon2 - lon1;

    double a = pow(sin(dlat / 2), 2) + cos(lat1) * cos(lat2) * pow(sin(dlon / 2), 2);
    double c = 2 * atan2(sqrt(a), sqrt(1 - a));

    return RADIUS_OF_EARTH * c;
}

int main() {
    double lat1, lon1, lat2, lon2;

    // Get user input
    std::cout << "Print the distance between two points on the surface of the Earth:" << std::endl;
    std::cout << "-----------------------------------------------------------------------" << std::endl;
    std::cout << "Input the latitude of coordinate 1: ";
    std::cin >> lat1;
    std::cout << "Input the longitude of coordinate 1: ";
    std::cin >> lon1;
    std::cout << "Input the latitude of coordinate 2: ";
    std::cin >> lat2;
    std::cout << "Input the longitude of coordinate 2: ";
    std::cin >> lon2;

    // Calculate and display the distance
    double distance = calculateDistance(lat1, lon1, lat2, lon2);
    std::cout << "The distance between those points is: " << distance << " kilometers" << std::endl;

    return 0;
}

