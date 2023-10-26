#include <iostream>
#include <cmath>

int main() {
    const int size = 6;
    int arr[size];

    // Get input from the user for all elements of the array
    std::cout << "Enter " << size << " integers:\n";
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    // Put every second element of array into power of 3 and save it in the same array
    for (int i = 1; i < size; i += 2) {
        arr[i] = pow(arr[i], 3);
    }

    // Print the updated array
    std::cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

