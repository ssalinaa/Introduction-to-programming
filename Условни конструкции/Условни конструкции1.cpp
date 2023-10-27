#include <iostream>
#include <climits>
#include <cmath>

	/*

    1. if - else

    if(<condition>)
    {
        code.. // Изпълнява се, ако условието е истина.
    }
    else // Не е задължителна част от конструкцията.
    {
        code.. // Изпълнява се, ако условието е лъжа.
    }

    Пример:

    bool flag = true;
    if(flag)
    {
        std::cout << "Условието е истина";
    }
    else
    {
        std::cout << "Условието е лъжа";
    }

    2. if - else if - else

    if(<condition1>)
    {
        code.. // Изпълнява се, ако първото условие е истина.
    }
    else if(<condition2>)
    {
        code.. // Изпълнява се, ако първото условие е лъжа, а второто условие е истина.
    }
    .
    .
    .
    else if(<conditionK>)
    {
        code.. // Изпълнява се, ако <condition1> - <conditionK-1> са лъжа, а <conditionK> е истина.
    }
    else
    {
        code.. // Изпълнява се, ако всички горни условия са лъжа.
    }

    Пример:

    int a = 15;
    if(a == 1)
    {
        std::cout << "a is equal to 1";
    }
    else if(a == 2)
    {
        std::cout << "a is equal to 2";
    }
    .
    .
    .
    else if(a == 10)
    {
        std::cout << "a is equal to 10";
    }
    else
    {
        std::cout << "a is not in the range 1-10";
    }

    3. switch

    switch(<integer>)
    {
        case value1: code.. break;
        case value2: code.. break;
        case value3: code.. break;
    
        //незадължително - Изпълнява се, ако променливата няма никоя от изредените стойности.
        default: code... break;
    }

    Пример:

    unsigned int a = 15;
    switch(a)
    {
        case 5:
            std::cout << "a is 5";
            break;
        case 10:
            std::cout << "a is 10";
            break;
        case 15:
            std::cout << "a is 15";
            break;
    
        default:
            std::cout << "a is not 5, 10 or 15";
            break;
    }

    4. Тернарен оператор

    <условие> ? <израз1> : <израз2>

    Ако условието е истина, се връща израз1
    В противен случай, се връща израз2

    Пример:

    int a = 10 > 12 ? 1 : 2;

	*/

int main() {

    /*
     
    Задачи

    Задача 1 Да се въведе цяло число.Ако числото е от цифрите 0 - 9 да се отпечата съответното съобщение.В противен случай да се изпиечата "Това не е цифра".

    Вход: 1 Изход : Това e 1 Вход : 13 Изход : Това не е цифра

    */

    int number;
    std::cin >> number;
    if (number >= 0 && number <= 9) {

        std::cout << "This is " << number << std::endl;
    }
    else {

        std::cout << "This is not a number" << std::endl;
    }

    /*

    Задача 2 Да се напише програма, която въвежда две цели числа n и m и извежда по - голямото от тях.

    Вход : 1 5 Изход : 5 Вход : 3 2 Изход : 3

    */

    int n, m;
    std::cin >> n >> m;

    // Начин с if - else
    if (n > m) {

        std::cout << n << std::endl;
    }
    else {

        std::cout << m << std::endl;
    }

    // Начин с тернарен оператор
    std::cout << (n > m ? n : m) << std::endl;

    /*
     
    Зaдача 3 Да се напише програма, която въвежда цяло число(броят точки) в диапазона[0, 100] и определя на каква оценка отговаря.

    85 < точки <= 100, Oценка = 6.
    70 < точки <= 85, Oценка = 5.
    50 < точки <= 70, Oценка = 4.
    30 < точки <= 50, Oценка = 3.
    0 <= точки <= 30, Oценка = 2.

    Вход: 79 Изход : 5 Вход : 38 Изход : 3

    */

    int points;
    std::cin >> points;
    if (points > 85 && points <= 100) {

        std::cout << 6 << std::endl;
    }
    if (points > 70 && points <= 85) {

        std::cout << 5 << std::endl;
    }
    if (points > 50 && points <= 70) {

        std::cout << 4 << std::endl;
    }
    if (points > 30 && points <= 50) {

        std::cout << 3 << std::endl;
    }
    if (points >= 0 && points <= 30) {

        std::cout << 2 << std::endl;
    }
    else {

        std::cout << "Incorrect number of points!" << std::endl;
    }

    /*

    Задача 4 Да се напише програма, която въвежда цяло число n и по следните критерии определя дали n е странно или не :

    n е нечетно - странно
    n е четно и е в затворения интервал от 2 до 5 - не е странно
    n е четно и е в затворения интервал от 6 до 20 - странно
    n е четно и е по - голямо от 20 - не е странно

    Вход : 3 Изход : Странно Вход : 4 Изход : Не е странно Вход : 22 Изход : Не е странно

    */

    int num;
    std::cin >> num;
    if (num % 2 != 0) {

        std::cout << "Strange" << std::endl;
    }
    else if (num >= 2 && num <= 5) {

        std::cout << "Not strange" << std::endl;
    }
    else if (num >= 6 && num <= 20) {

        std::cout << "Strange" << std::endl;
    }
    else if (num % 2 == 0 && num > 20) {

        std::cout << "Not strange" << std::endl;
    }

    /*
     
    Задача 5 Да се напише програма, която при подаване на 3 цели числа r, x и y.Да определя дали точката A(x, y) се намира вътре / на контура / извън кръга с радиус r и център(0, 0).

    Вход : 3 0 2 Изход : Вътре Вход : 1 1 0 Изход : На контура Вход : 4 13 16 Изход : Извън

    */

    int r, x, y;
    std::cin >> r >> x >> y;
    double distance = sqrt(x * x + y * y);
    if (distance < r) {

        std::cout << "Inside" << std::endl;
    }
    else if (distance == r) {

        std::cout << "On the contour" << std::endl;
    }
    else {

        std::cout << "Outside" << std::endl;
    }

    /*

    Задача 6 Да се напише програма, която въвежда 2 цели числа hh и mm.Към този час да се добавят 15минути.Да се направят коректни проверки, за да може форматът на часа да е правилен.

    Вход 0 1 Изход : 00 : 16 Вход 4 46 Изход : 05 : 01 Вход 23 50 Изход : 00 : 05

    */

    int hh, mm;
    std::cin >> hh >> mm;

    mm += 15;
    if (mm >= 60) {

        hh++;
        mm -= 60;
    }
    if (hh == 24) {

        hh -= 24;
    }
    std::cout << (hh < 10 ? '0' : '0') << hh << ':' << (mm < 10 ? '0' : '0') << mm << std::endl;

    /*

    Задача 7 Да се напише програма, която въвежда 4 цели числа n, m, l и k.Това съответно са броят на сини, червени, бели и черни топки в шкафчето на Иван.Колко най - малко топки трябва да извади Иван от шкафчето, за да е сигурен, че ще има поне по една топка от всеки цвят.

    Вход : 14 9 4 7 Изход : 31

    */

    int s, p, l, k;
    std::cin >> s >> p >> l >> k;

    int min = s;

    if (min > p) min = p;
    if (min > l) min = l;
    if (min > k) min = k;

    std::cout << s + p + l + k - min + 1 << std::endl;
}
