#include <iostream>
#include <climits>
#include <cmath>

/*
    Променливи и примитивни типове

    Примитивни типове:
    Целочислен тип (int, short, long ..)
    Числа с плаваща запетая (double, float ..)
    Булев тип (bool)
    Символен тип (char)
    Същестуват и други примитвни типове, които ще се разгледат по-напред в курса.

    Примери за деклариране на променливи:

        int i;
        double d;
        bool b;
        char c;

    Примери за инициализиране на променлива:

        int n = 10;
        double pi = 3.14;
        bool flag = false;
        char letter = 'k';

    Пример за присвояване на стойност:

        int i;
        i = 7;

    Пример за въвеждане на променлива от стандартния вход:

        int n;
        std::cin >> n;

    Пример за извеждане на променлива на стандартния изход(конзолата):

        double pi = 3.14;
        std::cout << pi;

    Преобразуване между типовете.

    Преобразуването може да се извърши:
    Без загуба на информация.

        bool b = true; //1
        int a = b; //
        int n = 4;
        double m = n; //4.0

    Със загуба на информация

        int a = 10;
        bool b = a; //1
        double PI = 3.14;
        int a = PI; //3

    Оператори.

    Аритметични оператори: +, -, *, /, %, ++, - -,
    Оператори за сравнение (винаги връщат истина/лъжа(bool)): ==, <, >, <=, >=, !=
    Логически оператори: &&, ||, !
    Оператори за присвояване: =, +=, -=, /=, *=, %=, &=, |=

    Всеки оператор има:

    Приоритет
    Асоциативност
    Позиция на оператора спярмо аргумента - префиксен, инфиксен и суфиксен
    Оператора sizeof и библиотеката climits
    sizeof е оператор, който ни връща размера на една променлива в байтове.

        int a;
        std::cout << sizeof(a); // 4
        std::cout << sizeof(int); // 4
        std::cout << sizeof(char); // 1

    Библиотеката climits се използва, за да имаме достъп до крайни стойности на стандартни типове.
    #include <climits>

    int main() {
        std::cout << INT_MAX << ' ' << INT_MIN; // 2147483647 -2147483648
    }

        */

int main() {
    
    	/*
        
        Задачи
    
    Задача 1 Отпечатайте на конзолата вашето име.
    
    Изход:
    Ivan
    
    */

    std::cout << "Ivan" << std::endl;

    /*
     
    Задача 2 Напишете програма, която да извежда големината на фундаменталните типове променливи.
    
    Изход:
    The sizeof(char) is: 1 bytes
    The sizeof(short) is: 2 bytes
    The sizeof(int) is: 4 bytes
    The sizeof(long) is: 8 bytes
    The sizeof(long long) is: 8 bytes
    The sizeof(float) is: 4 bytes
    The sizeof(double) is: 8 bytes
    The sizeof(long double) is: 16 bytes
    The sizeof(bool) is: 1 bytes

    */

    std::cout << "The sizeof(char) is: " << sizeof(char) << " bytes\n";
    std::cout << "The sizeof(short) is: " << sizeof(short) << " bytes\n";
    std::cout << "The sizeof(int) is: " << sizeof(int) << " bytes\n";
    std::cout << "The sizeof(long) is: " << sizeof(long) << " bytes\n";
    std::cout << "The sizeof(long long) is: " << sizeof(long long) << " bytes\n";
    std::cout << "The sizeof(float) is: " << sizeof(float) << " bytes\n";
    std::cout << "The sizeof(double) is: " << sizeof(double) << " bytes\n";
    std::cout << "The sizeof(long double) is: " << sizeof(long double) << " bytes\n";
    std::cout << "The sizeof(bool) is: " << sizeof(bool) << " bytes\n";

    /*

    Задача 3 Напишете програма, която да извежда минималната и максималната стойност на числовите типове.
    
    Изход:
    The maximum of int data type: 2147483647
    The minimum of int data type: -2147483648
    The maximum of unsigned int data type: 4294967295
    The maximum of long long data type: 9223372036854775807
    The minimum of long long data type: -9223372036854775808
    The maximum of unsigned long long data type: 18446744073709551615
    The maximum of char data type: 127
    The minimum of char data type: -128
    The maximum of signed char data type: 127
    The minimum of signed char data type: -128
    The maximum of unsigned char data type: 255
    The minimum of short data type: -32768
    The maximum of short data type: 32767
    The maximum of unsigned short data type: 65535

    */

    std::cout << "The maximum of int data type: " << INT_MAX << '\n';
    std::cout << "The minimum of int data type: " << INT_MIN << '\n';
    std::cout << "The maximum of unsigned int data type: " << UINT_MAX << '\n';
    std::cout << "The maximum of long long data type: " << LONG_MAX << '\n';
    std::cout << "The minimum of long long data type: " << LONG_MIN << '\n';
    std::cout << "The maximum of unsigned long long data type: " << ULONG_MAX << '\n';
    std::cout << "The maximum of char data type: " << CHAR_MAX << '\n';
    std::cout << "The minimum of char data type: " << CHAR_MIN << '\n';
    std::cout << "The maximum of signed char data type: " << SCHAR_MAX << '\n';
    std::cout << "The minimum of signed char data type: " << SCHAR_MIN << '\n';
    std::cout << "The maximum of unsigned char data type: " << UCHAR_MAX << '\n';
    std::cout << "The minimum of short data type: " << SHRT_MIN << '\n';
    std::cout << "The maximum of short data type: " << SHRT_MAX << '\n';
    std::cout << "The maximum of unsigned short data type: " << USHRT_MAX << '\n';

    /*
     
    Задача 4 Въведете цяло число. Да се отпечата 1, ако числото е четно и 0, ако е нечетно.
    
    Вход: 21 Изход: 0
    Вход: 4 Изход: 1

    */

    int number;
    std::cin >> number;
    std::cout << !(number % 2);

    /*
     
    Задача 5 Въведете цяло трицифрено число n. Да се отпечата числото наобратно.
    
    Вход: 123 Изход: 321
    Вход: 836 Изход: 638

    */

    int notFlipped;
    std::cin >> notFlipped;
    int flipped = 100 * (notFlipped % 10) + 10 * ((notFlipped / 10) % 10) + notFlipped / 100;
    std::cout << flipped;

    /*

    Задача 6 Въвеждат се две цели числа n и m. Да се отпечата:
    
    Тяхната сума
    Абсолютна стойност на тяхната разлика
    Остатъка при деление на първото с второто число
    Цялата част на частното на двете числа
    Частното на n със m
    Частното на n със m, закръглено надолу
    Частното на n със m, закръглено нагоре
    Сборът на n^2 + m^(1/2)
    
    Вход: 13 4 Изход:
    Сума: 17
    Абсолютна стойност: 9
    Остатък: 1
    Цяла част: 3
    Частно: 3.25
    Долна скоба: 3
    Горна скоба: 4
    Сбор: 171

    */

    int n, m;
    std::cin >> n >> m;

    std::cout << n + m << '\n';
    std::cout << abs(n - m) << '\n';
    std::cout << n % m << '\n';
    std::cout << n / m << '\n';
    std::cout << n * 1.0 / m << '\n';
    std::cout << floor(n * 1.0 / m) << '\n';
    std::cout << ceil(n * 1.0 / m) << '\n';
    std::cout << pow(n, 2) + sqrt(m) << '\n';

    /*

    Задача 7 Да се напише програма която разменя стойноста на две променливи.
    
    С помощна променлива
    С аритметични операции
    Вход: a = 34 b = 12 Изход: a = 12 b = 34

    */

    int a = 34, b = 12;

    // Вариант с помощна променлива
    int temp;
    temp = a;
    a = b;
    b = temp;

    std::cout << a << ' ' << b << '\n';

    // Вариант с аритметични операции
    a += b;
    b = a - b;
    a -= b;

    std::cout << a << ' ' << b << '\n';
    

}