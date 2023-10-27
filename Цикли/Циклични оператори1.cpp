#include <iostream>
#include <climits>
#include <cmath>

    /*
    
    1. While цикъл

    while(<condition>)
    {
        body...
    }

    Пример:

    int i = 0;
    while(i < 10)
    {
        i++;
        std::cout << i << ' ';
    }

    2. Do While цикъл

    do
    {
        body...
    }while(<condition>);

    Пример:

    int i = 0;
    do
    {
        i++;
        std::cout << i << ' ';
    }while(i < 10);

    Важно: При do-while структурата тялото се изпълнява първо и след това условието.
    
    3. For цикъл

    for(<initialization>; <condition>; <increment>)
    {
        body...
    }

    Структура на for цикъла:

    Инициализационен блок
    Условен блок
    Обновяващ блок
    Тяло на цикъла

    Пример:

    for(int i = 0; i < 10; i++)
    {
        std::cout << i << ' ';
    }

    4. Foreach цикъл - допълнение

    for(<initialization> : <container_to_iterate>)
    {
        body...
    }

    За тази структура се изисква да разбираме какво са указатели -> to be continued...
    
    5. Break оператор
    Използва се за преждевременно излизане от цикъл, преди той да е завършил своето изълнение.
   
   Пример:

    int i = 0;
    while(true)
    {
        i++;
        std::cout << i << ' ';
        if(i == 10)
        {
            break;
        }
    }

    6. Continue оператор

    Използва се, ако искаме да пропуснем дадена част от операциите на цикъла или някакво парче от тялото му.
    
    Пример:

    for(int i = 0; i < 10; i++)
    {
        if(i == 5)
        {
            continue;
        }
        std::cout << i << ' ';
    }
    
    */

int main() {

    /*
    
    Задачи

    Задача 1 Да се напише програма, която въвежда цяло положително число n. Да се изпиринтират квадратите на всички положителни цели числа, по-малки от n. Ограничение 1<= n <= 20.
    
    Вход: 5 Изход: 0 1 4 9 16

    */

    int n;
    std::cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        std::cout << i * i << " ";
    }

    /*
    
    Задача 2 Да се напише програма, която въвежда поток от числа и ги събира, докато не срещне 0. Да се отпечата резултата.
    
    Вход: 1 2 3 4 5 6 7 8 9 0 Изход: 45 Вход: 5 7 5 0 Изход: 17 Вход: 3 2 1 0 Изход: 6
    
    */

    int number;
    int sum = 0;
    do {

        std::cin >> number;
        sum += number;
    } 
    while (number != 0);
    std::cout << sum << std::endl;

    /*
     
    Задача 3 Да се напише програма, която въвежда цяло положително число n и отпечатва n!.
    
    Вход 5 Изход: 120

    */

    int num;
    std::cin >> num;

    int fact = 1;
    while (num > 0) {

        fact *= num;
        num--;
    }

    // Вариант с for цикъл
    // for(unsigned int i = 1; i <= n; i++){

    //     fact *= i;

    // }

    std::cout << fact << std::endl;
    
    /*

    Задача 4 Да се напише програма, която въвежда цяло число n и го обръща на обратно.
    
    Вход: 123456 Изход: 654321

    */
    
    int notReversed;
    std::cin >> notReversed;
    int reversed = 0;

    while (notReversed != 0) {

        reversed *= 10;
        reversed += notReversed % 10;
        notReversed /= 10;
    }

    std::cout << reversed << std::endl;

    /*

    Задача 5 Да се напише програма, която въвежда цяло число n и отпечатва дали е степен на 2.
    
    Вход: 1 Изход: true Вход: 13 Изход: false Вход: 32 Изход: true
    
    */

    int m;
    std::cin >> m;
    bool flag = true;

    while (m != 1) {

        if (m % 2) {

            flag = false;
            break;
        }

        m /= 2;
    }
    std::cout << std::boolalpha << flag << std::endl;

    /*
     
    Задача 6 Да се напише програма, която въвежда две цели положителни числа a и b. Програмата да изпълнява следните операции за всяко число в затворения интервал [a, b]. Ограничение a<=b.
    
    За всяко число n в интервала:
    
    Ако 0 <= n <= 9, да се изпринтира стойността на n с думи.
    Ако n > 9 и n е четно, да се изпринтира "четно".
    Ако n > 9 и n е нечетно, да се изпринтира "нечетно".
    Вход: 8 11 Изход: eight nine even odd
    
    */

    int a, b;
    std::cin >> a >> b;

    for (unsigned int i = a; i <= b; i++) {

        if (i >= 0 && i <= 9) {

            switch (i) {

            case 0:
                std::cout << "zero\n";
                break;
            case 1:
                std::cout << "one\n";
                break;
            case 2:
                std::cout << "two\n";
                break;
            case 3:
                std::cout << "three\n";
                break;
            case 4:
                std::cout << "four\n";
                break;
            case 5:
                std::cout << "five\n";
                break;
            case 6:
                std::cout << "six\n";
                break;
            case 7:
                std::cout << "seven\n";
                break;
            case 8:
                std::cout << "eight\n";
                break;
            case 9:
                std::cout << "nine\n";
                break;

            default:
                break;

            }

        }
        else {

            if (i % 2 == 0) {

                std::cout << "even\n";
            }
            else
            {
                std::cout << "odd\n";
            }
        }
    }


    /*
    
    Задача 7 Да се напише програма, която въвежда цяло число n и отпечатва пирамида от звездички.
    
    Вход: 5 Изход:    *
                    * * *
                  * * * * *
                * * * * * * *
              * * * * * * * * * 
    */

    unsigned int nn;
    std::cin >> nn;

    for (unsigned int i = 1; i <= nn; i++) {

        for (unsigned int j = 0; j < nn - i; j++) {
            std::cout << " ";
        }

        for (unsigned int j = 0; j < i; j++) {
            std::cout << "* ";
        }

        std::cout << '\n';

    }

    return 0;
}