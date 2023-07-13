#include <iostream>

/*

You are given a 4-digit number. 
Check if the sum of the first 2 digits is the same as the one of the last 2 digits.

*/

int main() {
    unsigned n;
    std::cin >> n;

    unsigned a = n % 10;
    n /= 10;
    unsigned b = n % 10;
    n /= 10;
    unsigned c = n % 10;
    n /= 10;

    std::cout << (a + b == c + n) << '\n';

    return 0;
}

int main()
{
    std::cout << "Hello World!\n";
}
