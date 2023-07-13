#include <iostream>

/*
Програма, която приема четири цифрено число и го извежда в обратен ред.
*/

int main()
{
    unsigned n;
    std::cin >> n;
    unsigned a = n % 10;
    n /= 10;
    unsigned b = n % 10;
    n /= 10;
    unsigned c = n % 10;
    n /= 10;

    unsigned result = a * 1000 + b * 100 + c * 10 + n;

    std::cout << result << std::endl;

    return 0;
}