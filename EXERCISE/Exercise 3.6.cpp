#include <iostream>
#include <string>
#include <sstream>
#include <climits>

/*
3.6. Task 3.15. [1] Write a program that enters the real vectors a0, a1, ..., an−1 and b0, b1, ..., bn−1 (1 ≤ n ≤ 100), finds their scalar
artwork and brings it to the screen.
*/


int main() {

    int n;
    double scalarProduct = 0.0;

    std::cout << "Enter the number of elements in the vectors: ";
    std::cin >> n;

    std::cout << "Enter the elements for vector a:" << std::endl;
    for (int i = 0; i < n; ++i) {

        double ai;
        std::cout << "a" << i << ": ";
        std::cin >> ai;

        double bi;
        std::cout << "b" << i << ": ";

        std::cin >> bi;

        scalarProduct += ai * bi;
    }

    std::cout << "Scalar product of a and b is: " << scalarProduct << std::endl;

    return 0;
}