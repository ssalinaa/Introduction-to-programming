#include <iostream>
#include <cmath>

/*
1.9. Problem 2.40.[1] To write a program that (via a for loop) finds
the sum of every third integer starting at 2 and not exceeding n
(ie the sum 2 + 5 + 8 + 11 + ...)
*/

int main() {

    int n;
    std::cout << "Enter an integer n: ";
    std::cin >> n;

    int sum = 0;

    for (int i = 2; i <= n; i += 3) {
        sum += i;
    }

    std::cout << "The sum of every third integer from 2 to " << n << " is: " << sum << std::endl;

    return 0;
}