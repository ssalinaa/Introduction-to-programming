#include <iostream>

/*
You are given a number. Count the number of its digits.

Example:
Input	Output
257	      3
58126	  5
*/

int main() {

    unsigned n;
    std::cin >> n;
    unsigned count = 0;

    while (n > 0)
    {
        count++;
        n /= 10;
    }

    std::cout << count;

    return 0;
}