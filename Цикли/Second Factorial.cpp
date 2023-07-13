#include <iostream>

/*
    Напишете програма, която изчислява двойния факториел на въведено от потребителя число.
*/
int main()
{

    int n;
    std::cin >> n;
    int result = 1;
    int factor;

    if (n % 2 == 0)
    {
        factor = 2;
    }
    else
    {
        factor = 1;
    }

    while (factor <= n)
    {
        result *= factor;
        factor += 2;
    }

    std::cout << "The double factoriel of " << n << " is: " << result;

    return 0;
}
