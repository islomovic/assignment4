#include <iostream>

// Function to convert a decimal number to a character
char convertToCharacter(int decimal) {
    // Check if the decimal number is within the valid range
    if (decimal >= 32 && decimal <= 126) {
        return static_cast<char>(decimal);
    }
    else {
        return 'Wrong';
    }
}

int main() {
    int decimal;

    // Get input from the user for the decimal number
    std::cout << "Enter a decimal number: ";
    std::cin >> decimal;

    // Convert the decimal number to a character
    char character = convertToCharacter(decimal);

    // Display the result
    if (character == 'Wrong') {
        std::cout << "Wrong input. The decimal number should be between 32 and 126." << std::endl;
    }
    else {
        std::cout << "The character corresponding to the decimal number " << decimal << " is '" << character << "'." << std::endl;
    }

    return 0;
}
