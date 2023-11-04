#include <iostream>
#include <climits>
#include <cmath>

int main() {

    /*
     
    Задачи

    Задача 1:
    Да се прочете от конзолата цяло число и да се отпечатат цифрите му в обратен ред.

    Пример :

    Вход : 12345
    Изход : 54321

    */

    int number;
    std::cin >> number;
    int result = 0;
    while (number != 0) {

        result *= 10;
        result += number % 10;
        number /= 10;
    }

    std::cout << result << std::endl;

    /*
     
    Задача 2 :
    Да се прочете от конзолата цяло число n и да се намери стойността на n!.

    Пример :

    Вход : 5
    Изход : 120

     */

    int n;
    std::cin >> n;
    int fact = 1;
    while (n != 0) {

        fact *= n;
        n--;
    }

    std::cout << fact << std::endl;

     /*
         
     Задача 3 :
     Да се прочетат от конзолата цяло число x и цифра n и да се намери колко пъти цифрата n се среща в числото x.

     Пример :

     Вход : 32345 3
     Изход : 2

     */

    int x, digit;
    std::cin >> x >> digit;
    int count = 0;
    while (x != 0) {

        if (digit == x % 10) {

            count++;
        }
        x /= 10;
    }

    std::cout << count << std::endl;

    /*
     
    Задача 4 :
    Да се прочете цяло число от конзолата и да се провери дали то е палиндром.

    Пример :

    Вход : 12321
    Изход : true

    Вход : 12345
    Изход : false

    */

    int num;
    std::cin >> num;
    int reversed = 0;
    int copy = num;
    while(num != 0) {

        reversed *= 10;
        reversed += num % 10;
        num /= 10;
    }

    std::cout << std::boolalpha << (copy == reversed) << std::endl;

    /*
    
    Задача 5 :
    Да се прочете от конзолата цяло число и да се изведат на екрана всички негови делители.

    Пример :

    Вход : 10
    Изход : 1 2 5 10

    */

    int numm;
    std::cin >> numm;
    for (size_t i = 1; i <= numm; i++)
    {
        if (numm % i == 0) {

            std::cout << i << " ";
        }
    }

    /*
       
    Задача 6 :
    Да се прочете от конзолата цяло число n и след това n на брой цели числа.
    Да се намерят минимум, максимум и средно аритметично на тези
    числа(за целта не е необходимо да се използва масив).

    Пример :

    Вход : 5 1 2 3 4 5
    Изход : min = 1, max = 5, avg = 3

    */

    int n;
    std::cin >> n;
    int min = std::numeric_limits<int>::max();
    int max = 0;
    int average = 0;
    for (size_t i = 0; i < n; i++)
    {
        int m;
        std::cin >> m;
        average += m;

        if (m > max) {

            max = m;
        }

        if (m < min) {

            min = m;
        }

    }
    std::cout << "Min = " << min << ", max = " << max << ", average = " << average / n << std::endl;

    /*
     
    Задача 7 :
    Да се прочете от конзолата цяло число n и да се отпечатат на екрана първите n числа на Фибоначи.

    Пример :

    Вход : 5
    Изход : 1 1 2 3 5

    */

    int n;
    std::cin >> n;
    int first = 1;
    int second = 1;
    for (size_t i = 0; i < n; i++)
    {
        std::cout << first << " ";
        int next = first + second;
        first = second;
        second = next;
    }

    /*
     
    Задача 8 (за домашно) :
    Да се напише програма, която проверява дали дадено число е "нарцистично".Едно число се нарича "нарцистично", ако сумата от цифрите му, повдигнати на степен броя на цифрите му, е равна на самото число.

    Пример :

    Вход : 153
    Изход : true
    Обяснение : 153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3

    Вход : 123
    Изход : false
    Обяснение : 123 != 1 ^ 3 + 2 ^ 3 + 3 ^ 3

    Вход : 370
    Изход : true
    Обяснение : 370 = 3 ^ 3 + 7 ^ 3 + 0 ^ 3

    */

    int number;
    std::cin >> number;
    int sum = 0;
    int count = 0;
    int copy = number;
    while (copy != 0) {

        copy /= 10;
        count++;
    }

    copy = number;
    while (copy != 0) {

        sum += std::pow(copy % 10, count);
        copy /= 10;
    }

    std::cout << std::boolalpha << (sum == number) << std::endl;
}
