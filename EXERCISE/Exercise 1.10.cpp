#include <iostream>
#include <cmath>

/*
1.10. Task 2.44.[1] Given a natural number n (n ≥ 1). Write a program that finds the number of these elements in the series of numbers i3+13×i×n+n3, i = 1, 2, ..., n, which are multiples of 5 or 9.
*/

int main() {
    int n;
    std::cout << "Enter a natural number n (n >= 1): ";
    std::cin >> n;

    int count = 0; // Counter for numbers divisible by 5 or 9

    for (int i = 1; i <= n; i++) {
        int number = i * i * i + 13 * i * n + n * n * n;

        if (number % 5 == 0 || number % 9 == 0) {
            count++;
        }
    }

    std::cout << "The count of numbers divisible by 5 or 9 in the series is: " << count << std::endl;

    return 0;
}