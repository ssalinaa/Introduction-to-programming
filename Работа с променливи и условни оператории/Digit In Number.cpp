#include <iostream>

/*
You are given a 4-digit number and a digit. 
Check if the digit is part of the number.
*/

int main() {

    unsigned n, digit;
    std::cin >> n >> digit;

    unsigned a = n % 10;
    n /= 10;
    unsigned b = n % 10;
    n /= 10;
    unsigned c = n % 10;
    n /= 10;

    std::cout << ((a == digit) || (b == digit) || (c == digit) || (n == digit)) << '\n';

    return 0;
}