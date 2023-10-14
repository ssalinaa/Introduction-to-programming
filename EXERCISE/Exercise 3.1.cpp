#include <iostream>
#include <string>
#include <sstream>
#include <climits>

/*
3.1. Task 3.1. [1] Write a program that inputs an array of n targets
numbers (1 ≤ n ≤ 50) and finds and outputs the minimum of them.
*/

int main() {

    int n;
    std::cout << "Enter the number of integers (n): ";
    std::cin >> n;

    if (n < 1 || n > 50) {

        std::cout << "Invalid number of integers. The count should be between 1 and 50." << std::endl;
        return 1; // Exit with an error
    }

    int minNumber = INT_MAX; // Initialize the variable with the maximum value

    for (size_t i = 0; i < n; i++)
    {
        int number;
        std::cin >> number;

        if (number < minNumber) {

            minNumber = number;
        }
    }

    std::cout << "The minimum number in the sequence is: " << minNumber << std::endl;

    return 0;
}


