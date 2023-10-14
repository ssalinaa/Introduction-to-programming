#include <iostream>

/*
1.7. Problem 2.12.[1] Write a program that checks if a given year is a leap year.
*/

int main() {

    int year;
    std::cin >> year;

    bool isLeapYear = (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);
    std::cout << std::boolalpha << isLeapYear << std::endl;

    return 0;
}
