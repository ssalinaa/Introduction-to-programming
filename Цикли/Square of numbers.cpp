#include <iostream>

/*
    Напишете програма, която при въведено естествено число n намира сумата на квадратите на всички числа от 1 до n (вкл.)
*/

int main()
{

    int n = 1, sum = 0;
    std::cin >> n;
  
    for (int i = 1; i <= n; i++)
    {
        sum += i * i;
    }

    std::cout << sum << std::endl;

    return 0;
}
