#include <iostream>
#include <climits>
#include <cmath>

int main() {

    /*
    Задачи

    Задача 1 :
    Въведете в конзолата три числа от тип double и проверете дали те могат да са ъгли на триъгълник.На екрана да се изведе подходящо съобщение.

    Пример :

    Вход : 29.5 60.5 90.0
    Изход : These angles can form a triangle.

    Вход : 60.8 39.5 98.2
    Изход : These angles can't form a triangle.

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

     Задача 2 :
     Въведете в конзолата символ и изведете подходящо съобщение дали той е цифра, малка латинска буква, голяма латинска буква или нито едно от посочените.

     Пример :

     Вход : 5
     Изход : The symbol is a digit.

     Вход : a
     Изход : The symbol is a lowercase letter.

     Вход : A
     Изход : The symbol is an uppercase letter.

     Вход : #
     Изход: The symbol is not a digit or a letter.

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

      Задача 3 :
      Въведете в конзолата три цели числа и проверете дали те могат да са страни на триъгълник.
      На екрана да се изведе подходящо съобщение.Ако числата могат да са страни на триъгълник,
      да се провери дали той е разностранен, равнобедрен или равностранен.Да се изведе подходящо съобщение на екрана.

      Пример :

      Вход : 3 4 5
      Изход : These sides can form a triangle.The triangle is scalene.

      Вход : 3 3 5
      Изход : These sides can form a triangle.The triangle is isosceles.

      Вход : 3 3 3
      Изход : These sides can form a triangle.The triangle is equilateral.

      Вход : 1 2 3
      Изход : These sides can't form a triangle.

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
     
    Задача 4 :
    Въведете в конзолата цифра(помислете за подходящ тип).Чрез използването на оператор switch и право само на двукратно използване на оператора break, да се провери дали въведената цифра е четна или нечетна и да се изведе подходящо съобщение на екрана.

    Пример :

    Вход : 5
    Изход : The number is odd.

    Вход : 6
    Изход : The number is even.

    Вход : 10
    Изход : Incorrect input.The number must be between 0 and 9.

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
     
    Задача 5 :
    Да се въведат едно цяло положително число и една от следните главни латински букви('A', 'B', 'C').Числото отговаря на килограмите на пратката, която се опитваме да изпратим, а латинската буква отговаря на дестинацията, до която се опитваме да я изпратим.Цената на килограм за доставката до 'A' : 5, до 'B' : 7, до 'C' : 10. Да се изведе на екрана цената на пратката.

    Пример :

    Вход : 5 A
    Изход : 25

    Вход : 10 B
    Изход : 70

    Вход : 15 C
    Изход : 150

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
     
    Задача 6 :
    Въведете число в конзолата, отговарящо на година, и проверете дали е в интервала[0, 2500], въведете число, отговарящо на месец и проверете дали е в интервала[1, 12], накрая въведете число, отговарящо на ден(съответно проверете за определените месеци дали се вмества в интервала[1, 31], [1, 30], [1, 28] или[1, 29]).Спрямо въведените месец и година да се провери дали датата е коректна, като вземете предвид и високосните години.Ако датата е валидна да се отпечата : "The date is valid", в противен случай : "Invalid Date".

    Бонус :
    Отпечатайте подадената дата в следният формат : DDst / nd / rd / th <month_name> YYYY(При DD = 01 -> 01st, 02 -> 02nd, 03 -> 03rd, 04 -> 04th...).

    Пример :

    Вход : 2020 10 15
    Изход : The date is valid

    Вход : 2020 13 15
    Изход : Invalid Date

    Вход : 2020 2 29
    Изход : The date is valid

    Вход : 2021 2 29
    Изход : Invalid Date

    Вход : 2020 6 32
    Изход : Invalid Date
    За бонуса :

    Вход: 2020 2 28
    Изход : Leap year 28th February 2020
    
    Вход : 1998 5 3
    Изход : 03rd May 1998
    
    Вход : 1863 11 22
    Изход : 22nd November 1863
    
    Вход : 2020 2 29
    Изход : Leap year 29th February 2020

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
     
    Задача 7 (БОНУС) :
    Въведете в конзолата 3 положителни цели числа : година, месец и ден от месеца.Да се определи кой ден от седмицата е тази дата.
    
    Упътване : Може да използвате Zeller's congruence.
    
    Пример :
    
    Вход : 2020 10 15
    Изход : Thursday
    
    Вход : 2020 10 16
    Изход : Friday
    
    Вход : 2020 10 17
    Изход : Saturday
    
    Вход : 2020 10 18
    Изход : Sunday
    
    Вход : 2020 10 19
    Изход : Monday
    
    Вход : 2020 10 20
    Изход : Tuesday
    
    Вход : 2020 10 21
    Изход : Wednesday

    */

    int year, month, day;

    std::cout << "Въведете година: ";
    std::cin >> year;
    std::cout << "Въведете месец: ";
    std::cin >> month;
    std::cout << "Въведете ден: ";
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