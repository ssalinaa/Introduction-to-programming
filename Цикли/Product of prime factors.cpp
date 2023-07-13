#include <iostream>

/*
You are given a positive number. Output it as product of prime factors.

Example:
Input	Output
24	2 * 2 * 2 * 3
98	2 * 7 * 7
*/

int main()
{
    int n;
    std::cin >> n;

    for (int i = 2; i <= n; i++)
    {
        bool isPrime = true;

        unsigned j = 2;
        while (j < sqrt(i) && isPrime)
        {
            if (i % j == 0)
            {
                isPrime = false;
            }
            j++;
        }

        if (n % i == 0 && isPrime)
        {
            do
            {
                std::cout << i;
                n /= i;
                if (n > 1)
                {
                    std::cout << " * ";
                }
            } while (n % i == 0);
        }
    }

    return 0;
}