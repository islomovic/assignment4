#include <iostream>
#include <iomanip>

// Function to calculate division
double divide(double num1, double num2) {
    return num1 / num2;
}

int main() {
    double num1, num2;

    // Get input from the user
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Calculate the result of division
    double result = divide(num1, num2);

    // Set precision to 3
    std::cout << std::fixed << std::setprecision(3);

    // Display the result
    std::cout << "Result: " << result << std::endl;

    return 0;
}

