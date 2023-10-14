#include <iostream>
#include <string>
#include <sstream>
#include <climits>

/*
Task 3.2. [1] Write a program that inputs the number of n
(1 ≤ n ≤ 50) integers a0, a1, ..., an−1 and finds and outputs the sum of
those elements of the series which are doubled odd numbers.
*/


int main() {

    int n;
    std::cout << "Enter the number of integers (n): ";
    std::cin >> n;

    if (n < 1 || n > 50) {

        std::cout << "Invalid number of integers. The count should be between 1 and 50." << std::endl;
        return 1; // Exit with an error
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {

        int num;
        std::cout << "Enter integer " << i + 1 << ": ";
        std::cin >> num;

        if (num % 2 != 0) {

            sum += num * 2; // Add the doubled odd number to the sum
        }
    }

    std::cout << "The sum of doubled odd numbers in the sequence is: " << sum << std::endl;

    return 0;
}


