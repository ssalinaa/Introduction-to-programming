#include <iostream>
#include <string>
#include <sstream>
#include <climits>

/*
Task 3.3. [1] Write a program that finds and outputs the sum of the positive and the product of the negative elements of
the sequence of real numbers a0, a1, ..., an−1 (1 ≤ n ≤ 20).
*/


int main() {

    int n;
    std::cout << "Enter the number of integers (n): ";
    std::cin >> n;

    if (n < 1 || n > 20) {

        std::cout << "Invalid number of integers. The count should be between 1 and 50." << std::endl;
        return 1; // Exit with an error
    }

    int sumPositive = 0;
    int productNegative = 1;

    for (int i = 0; i < n; i++) {

        int num;
        std::cout << "Enter integer " << i + 1 << ": ";
        std::cin >> num;

        if (num > 0) {

            sumPositive += num;
       }
        else if (num < 0) {

            productNegative *= num;
        }
    }

    std::cout << "Sum of positive elements: " << sumPositive << std::endl;
    std::cout << "Product of negative elements: " << productNegative << std::endl;

    return 0;
}


