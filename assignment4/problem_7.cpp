#include <iostream>

int main() {
    const int size = 5;
    int arr[size];

    // Get input from the user for all elements of the array
    std::cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Divide all elements by 2 and save it in the same array
    for (int i = 0; i < size; i++) {
        arr[i] /= 2;
    }

    // Print the updated array
    std::cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

