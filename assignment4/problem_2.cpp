
#include <iostream>

// Function to convert kilometers to meters
double convertToMeters(double kilometers) {
    return kilometers * 1000;
}

int main() {
    double kilometers;

    // Get input from the user
    std::cout << "Enter the number of kilometers: ";
    std::cin >> kilometers;

    // Convert kilometers to meters
    double meters = convertToMeters(kilometers);

    // Display the result
    std::cout << "The equivalent distance in meters is: " << meters << std::endl;

    return 0;
}

