#include <iostream>

// Function to check if an isosceles right triangle can be formed
bool isIsoscelesRightTriangle(double a, double b, double c) {
    // Check if the triangle satisfies the conditions for an isosceles right triangle
    if (a == b && b != c && a*a + b*b == c*c) {
        return true;
    }
    else if (b == c && c != a && b*b + c*c == a*a) {
        return true;
    }
    else if (c == a && a != b && c*c + a*a == b*b) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    double a, b, c;

    // Get input from the user for the sides of the triangle
    std::cout << "Enter the length of side a: ";
    std::cin >> a;
    std::cout << "Enter the length of side b: ";
    std::cin >> b;
    std::cout << "Enter the length of side c: ";
    std::cin >> c;

    // Check if an isosceles right triangle can be formed
    bool isIsoscelesRight = isIsoscelesRightTriangle(a, b, c);

    // Display the result
    if (isIsoscelesRight) {
        std::cout << "An isosceles right triangle can be formed with the given sides." << std::endl;
    }
    else {
        std::cout << "An isosceles right triangle cannot be formed with the given sides." << std::endl;
    }

    return 0;
}

