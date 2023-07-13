#include <iostream>

/*
You are given 2 positive numbers a and b. Find their Greatest Common Divisor (GCD).

Example:
Input	Output
20
28	4
98
56	14
*/

int main()
{
    unsigned a, b;
    std::cin >> a >> b;
    while (a != b)
    {
        if (a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }

    std::cout << a;

    return 0;
}