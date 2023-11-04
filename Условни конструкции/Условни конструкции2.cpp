#include <iostream>
#include <climits>
#include <cmath>

int main() {

    /*
    ������

    ������ 1 :
    �������� � ��������� ��� ����� �� ��� double � ��������� ���� �� ����� �� �� ���� �� ����������.�� ������ �� �� ������ ��������� ���������.

    ������ :

    ���� : 29.5 60.5 90.0
    ����� : These angles can form a triangle.

    ���� : 60.8 39.5 98.2
    ����� : These angles can't form a triangle.

    */

     double angle1, angle2, angle3;
     std::cin >> angle1 >> angle2 >> angle3;

     if(angle1 <= 0 || angle2 <= 0 || angle3 <= 0) {

     std::cout << "Incorrect input." << std::endl;
     }

     if (angle1 + angle2 + angle3 == 180) {

         std::cout << "These angles can form a triangle." << std::endl;
     }
     else {

         std::cout << "These angles can't form a triangle." << std::endl;
     }

     /*

     ������ 2 :
     �������� � ��������� ������ � �������� ��������� ��������� ���� ��� � �����, ����� �������� �����, ������ �������� ����� ��� ���� ���� �� ����������.

     ������ :

     ���� : 5
     ����� : The symbol is a digit.

     ���� : a
     ����� : The symbol is a lowercase letter.

     ���� : A
     ����� : The symbol is an uppercase letter.

     ���� : #
     �����: The symbol is not a digit or a letter.

     */

      char symbol;
      std::cin >> symbol;
      if (symbol >= '0' && symbol <= '9') {

          std::cout << "The symbol is a digit." << std::endl;
      }
      else if (symbol >= 'a' && symbol <= 'z') {

          std::cout << "The symbol is a lowercase letter." << std::endl;
      }
      else if (symbol >= 'A' && symbol <= 'Z') {

          std::cout << "The symbol is an uppercase letter." << std::endl;
      }
      else {

          std::cout << "The symbol is not a digit or a letter." << std::endl;
      }

      /*

      ������ 3 :
      �������� � ��������� ��� ���� ����� � ��������� ���� �� ����� �� �� ������ �� ����������.
      �� ������ �� �� ������ ��������� ���������.��� ������� ����� �� �� ������ �� ����������,
      �� �� ������� ���� ��� � ������������, ����������� ��� ������������.�� �� ������ ��������� ��������� �� ������.

      ������ :

      ���� : 3 4 5
      ����� : These sides can form a triangle.The triangle is scalene.

      ���� : 3 3 5
      ����� : These sides can form a triangle.The triangle is isosceles.

      ���� : 3 3 3
      ����� : These sides can form a triangle.The triangle is equilateral.

      ���� : 1 2 3
      ����� : These sides can't form a triangle.

      */

    int a, b, c;
    std::cin >> a >> b >> c;

    if (a <= 0 || b <= 0 || c <= 0)
    {
        std::cout << "Incorrect input." << std::endl;
        return 1;
    }

    if (a + b <= c || b + c <= a || a + c <= b)
    {
        std::cout << "These sides can't form a triangle." << std::endl;
    }
    else if (a == b && b == c)
    {
        std::cout << "These sides can form a triangle. The triangle is equilateral." << std::endl;
    }

    else if (a == b || b == c || a == c)
    {
        std::cout << "These sides can form a triangle. The triangle is isosceles." << std::endl;
    }
    else
    {
        std::cout << "These sides can form a triangle. The triangle is scalene." << std::endl;
    }

    /*
     
    ������ 4 :
    �������� � ��������� �����(��������� �� �������� ���).���� ������������ �� �������� switch � ����� ���� �� ��������� ���������� �� ��������� break, �� �� ������� ���� ���������� ����� � ����� ��� ������� � �� �� ������ ��������� ��������� �� ������.

    ������ :

    ���� : 5
    ����� : The number is odd.

    ���� : 6
    ����� : The number is even.

    ���� : 10
    ����� : Incorrect input.The number must be between 0 and 9.

    */

    int digit;
    std::cin >> digit;
    switch (digit) {

    case 0:
    case 2:
    case 4:
    case 6:
    case 8:
        std::cout << "The number is even."; break;
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
        std::cout << "The number is odd."; break;
    default:
        std::cout << "Incorrect input. The number must be between 0 and 9."; break;
    }

    /*
     
    ������ 5 :
    �� �� ������� ���� ���� ����������� ����� � ���� �� �������� ������ �������� �����('A', 'B', 'C').������� �������� �� ����������� �� ��������, ����� �� �������� �� ��������, � ���������� ����� �������� �� ������������, �� ����� �� �������� �� � ��������.������ �� �������� �� ���������� �� 'A' : 5, �� 'B' : 7, �� 'C' : 10. �� �� ������ �� ������ ������ �� ��������.

    ������ :

    ���� : 5 A
    ����� : 25

    ���� : 10 B
    ����� : 70

    ���� : 15 C
    ����� : 150

    */

    int number;
    char letter;
    std::cin >> number >> letter;
    switch (letter) {

    case 'A': std::cout << number * 5; break;
    case 'B': std::cout << number * 7; break;
    case 'C': std::cout << number * 10; break;
    }

    /*
     
    ������ 6 :
    �������� ����� � ���������, ���������� �� ������, � ��������� ���� � � ���������[0, 2500], �������� �����, ���������� �� ����� � ��������� ���� � � ���������[1, 12], ������ �������� �����, ���������� �� ���(��������� ��������� �� ������������ ������ ���� �� ������� � ���������[1, 31], [1, 30], [1, 28] ���[1, 29]).������ ���������� ����� � ������ �� �� ������� ���� ������ � ��������, ���� ������� ������� � ����������� ������.��� ������ � ������� �� �� �������� : "The date is valid", � �������� ������ : "Invalid Date".

    ����� :
    ����������� ���������� ���� � �������� ������ : DDst / nd / rd / th <month_name> YYYY(��� DD = 01 -> 01st, 02 -> 02nd, 03 -> 03rd, 04 -> 04th...).

    ������ :

    ���� : 2020 10 15
    ����� : The date is valid

    ���� : 2020 13 15
    ����� : Invalid Date

    ���� : 2020 2 29
    ����� : The date is valid

    ���� : 2021 2 29
    ����� : Invalid Date

    ���� : 2020 6 32
    ����� : Invalid Date
    �� ������ :

    ����: 2020 2 28
    ����� : Leap year 28th February 2020
    
    ���� : 1998 5 3
    ����� : 03rd May 1998
    
    ���� : 1863 11 22
    ����� : 22nd November 1863
    
    ���� : 2020 2 29
    ����� : Leap year 29th February 2020

    */

    int year, month, day;
    std::cin >> year;
    if (year < 0 || year > 2500) {
    
        std::cout << "Invalid year." << std::endl;
    }
    else {

    std::cin >> month;
    if (month < 0 && month > 12) {

        std::cout << "Invalid month." << std::endl;
    }
    else {

        std::cin >> day;
        int maxDaysInMonth = 0;
        bool isLeapYear = false;
        switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: maxDaysInMonth = 31; break;
        case 4:
        case 6:
        case 9:
        case 11: maxDaysInMonth = 30; break;
        case 2: {
            if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {

                maxDaysInMonth = 29;
                isLeapYear = true;
            }
            else {

                maxDaysInMonth = 28;
                isLeapYear = false;
            }
        }
        }
        if (day < 1 || day > maxDaysInMonth) {

            std::cout << "Invalid date." << std::endl;
        }
        else {

            std::cout << "The date is valid." << std::endl;
        }
    }
 }

    int year, month, day;
    
    std::cout << "Enter year: ";
    std::cin >> year;
    std::cout << "Enter month: ";
    std::cin >> month;
    std::cout << "Enter day: ";
    std::cin >> day;
    
    bool isLeap = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    
    std::cout << "Output: ";
    if (isLeap) {
        std::cout << "Leap year ";
    }
    
    if (day == 1 || day == 21 || day == 31) {
        std::cout << day << "st ";
    }
    else if (day == 2 || day == 22) {
        std::cout << day << "nd ";
    }
    else if (day == 3 || day == 23) {
        std::cout << day << "rd ";
    }
    else {
        std::cout << day << "th ";
    }
    
    switch (month) {
    case 1: std::cout << "January"; break;
    case 2: std::cout << "February"; break;
    case 3: std::cout << "March"; break;
    case 4: std::cout << "April"; break;
    case 5: std::cout << "May"; break;
    case 6: std::cout << "June"; break;
    case 7: std::cout << "July"; break;
    case 8: std::cout << "August"; break;
    case 9: std::cout << "September"; break;
    case 10: std::cout << "October"; break;
    case 11: std::cout << "November"; break;
    case 12: std::cout << "December"; break;
    default: std::cout << "Invalid month";
    }
    
    std::cout << " " << year << std::endl;

    /*
     
    ������ 7 (�����) :
    �������� � ��������� 3 ����������� ���� ����� : ������, ����� � ��� �� ������.�� �� �������� ��� ��� �� ��������� � ���� ����.
    
    �������� : ���� �� ���������� Zeller's congruence.
    
    ������ :
    
    ���� : 2020 10 15
    ����� : Thursday
    
    ���� : 2020 10 16
    ����� : Friday
    
    ���� : 2020 10 17
    ����� : Saturday
    
    ���� : 2020 10 18
    ����� : Sunday
    
    ���� : 2020 10 19
    ����� : Monday
    
    ���� : 2020 10 20
    ����� : Tuesday
    
    ���� : 2020 10 21
    ����� : Wednesday

    */

    int year, month, day;

    std::cout << "�������� ������: ";
    std::cin >> year;
    std::cout << "�������� �����: ";
    std::cin >> month;
    std::cout << "�������� ���: ";
    std::cin >> day;

    if (month < 3) {
        month += 12;
        year--;
    }

    int h = (day + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;

    switch (h) {
    case 0:
        std::cout << "Saturday" << std::endl;
        break;
    case 1:
        std::cout << "Sunday" << std::endl;
        break;
    case 2:
        std::cout << "Monday" << std::endl;
        break;
    case 3:
        std::cout << "Tuesday" << std::endl;
        break;
    case 4:
        std::cout << "Wednesday" << std::endl;
        break;
    case 5:
        std::cout << "Thursday" << std::endl;
        break;
    case 6:
        std::cout << "Friday" << std::endl;
        break;
    }
}