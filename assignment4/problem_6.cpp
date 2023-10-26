#include <iostream>

int main() {
    const int size = 5;
    int arr[size];

    // Get input from the user for all elements of the array
    std::cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Calculate the product of all elements
    int product = 1;
    for (int i = 0; i < size; i++) {
        product *= arr[i];
    }

    // Display the product
    std::cout << "Product of all elements: " << product << std::endl;

    return 0;
}


