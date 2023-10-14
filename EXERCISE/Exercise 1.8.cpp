#include <iostream>
#include <cmath>

/* 1.8. Problem 1.20.[1] Write a program that, given integers x and k (k ≥ 1) entered from the keyboard, finds and displays the k-th digit of x. Counting should be from right to left.
*/

int main() {
    int x, k;

    // Enter the number x and position k
    std::cout << "Enter an integer x: ";
    std::cin >> x;

    std::cout << "Enter the position k (k >= 1): ";
    std::cin >> k;

    // Check if k is a valid (positive) value
    if (k < 1) {
        std::cout << "Position k must be at least 1." << std::endl;
        return 1; // Exit with an error
    }

    // Convert the number x to a positive number (if it's negative)
    x = std::abs(x);

    // Find and display the k-th digit, counting from right to left
    int digit;
    while (k > 0 && x > 0) {
        digit = x % 10;
        x /= 10;
        k--;
    }

    if (k == 0) {
        std::cout << "The k-th digit from right to left in the number is: " << digit << std::endl;
    }
    else {
        std::cout << "Position k exceeds the number of digits in the number." << std::endl;
    }

    return 0;
}