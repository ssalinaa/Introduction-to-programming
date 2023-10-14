#include <iostream>
#include <string>
#include <sstream>
#include <climits>

/*
3.4. Task 3.7. [1] Write a program that finds out if there is in the queue
of integers a0, a1, ..., an−1 (1 ≤ n ≤ 100) at least two consecutive
the elements with equal values.
*/


int main() {

    int n;
    std::cout << "Enter the number of elements in the sequence (1 <= n <= 100): ";
    std::cin >> n;

    if (n < 1 || n > 100) {

        std::cout << "Invalid number of elements. Please enter a number between 1 and 100." << std::endl;
        return 1;
    }

    int previousElement, currentElement;

    std::cout << "Enter element a0: ";
    std::cin >> previousElement;

    for (int i = 1; i < n; i++) {

        std::cout << "Enter element a" << i << ": ";
        std::cin >> currentElement;

        if (currentElement == previousElement) {
            std::cout << "The sequence contains at least two consecutive elements with equal values." << std::endl;
            return 0;
        }

        previousElement = currentElement;
    }

    std::cout << "The sequence does not contain at least two consecutive elements with equal values." << std::endl;
    
    return 0;
}


