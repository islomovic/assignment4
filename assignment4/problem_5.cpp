#include <iostream>

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

// Function to display prime numbers between two numbers
void displayPrimeNumbers(int start, int end) {
    std::cout << "Prime numbers between " << start << " and " << end << " are: ";

    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }

    std::cout << std::endl;
}

int main() {
    int start, end;

    // Get input from the user for the start and end numbers
    std::cout << "Enter the start number: ";
    std::cin >> start;

    std::cout << "Enter the end number: ";
    std::cin >> end;

    // Call the function to display prime numbers
    displayPrimeNumbers(start, end);

    return 0;
}
