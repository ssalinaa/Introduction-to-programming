#include <iostream>
#include <cmath>

/*
    Програма, която проверява дали едно число е автоморфно.
    Дадено число е автоморфно, ако квадратът му завършва на него самото.

   Пример:
1 е автоморфно, защото 1^2 = 1 , което завършва на 1.
2 не е автоморфно - 2^2 = 4 - не завършва на 2.
16 не е автоморфно - 16^2 = 256 - не завършва на 16.
76 е автоморфно - 76^2 = 5776 - завъшрва на 76
    
    */
int main()
{

    int n = 0;
    std::cin >> n;

    int countOfDigits = 0;
    int copyOfN = n;
    while (copyOfN > 0)
    {
        countOfDigits++;
        copyOfN /= 10;
    }

    int square = std::pow(n, 2);
    int powOfTen = std::pow(10, countOfDigits);
    int remainder = square % powOfTen;

    if (remainder == n)
        std::cout << "The number is automorphic" << std::endl;
    else
        std::cout << "The number is not automorphic" << std::endl;

    return 0;
}