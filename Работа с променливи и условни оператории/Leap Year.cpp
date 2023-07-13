#include <iostream>

/*
Програма, която проверява дали дадена година е високосна.
*/

int main()
{
    int year;
    std::cin >> year;

    bool is_divisible_by_4 = year % 4 == 0;
    bool is_divisible_by_100 = year % 100 == 0;
    bool is_divisible_by_400 = year % 400 == 0;

    std::cout << std::boolalpha << ((is_divisible_by_4 && !is_divisible_by_100) || is_divisible_by_400) << '\n';
    
    return 0;
}
