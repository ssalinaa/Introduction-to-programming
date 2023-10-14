#include <iostream>
#include <string>
#include <sstream>

/*
2.1. Task 4.12.[1] To write a boolean function that checks whether a date,
set in the following format: dd.mm.yyyy is a valid Gregorian date
*/

bool IsValidDate(const std::string& date) {

    std::stringstream ss(date);
    char delimiter;
    int day, month, year;

    if (ss >> day >> delimiter >> month >> delimiter >> year) {

        if (delimiter == '.' && day >= 1 && month >= 1 && month <= 12 && year >= 1) {
           
            int daysInMonth[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
               
                daysInMonth[2] = 29;  // Leap year
            }

            if (day <= daysInMonth[month]) {
               
                return true;  // Valid date
            }
        }
    }

    return false;  // Invalid date
}

int main() {

    std::string date;
    std::cout << "Enter a date in the format dd.mm.yyyy: ";
    std::cin >> date;

    if (IsValidDate(date)) {
        std::cout << "The date is valid." << std::endl;
    }
    else {
        std::cout << "The date is not valid." << std::endl;
    }

    return 0;
}