#include <iostream>

/*
    Напишете програма, която по въведени две положителни числа проверява дали сумата на цифрите им съвпада.
*/

int sumOfDigits(int x)
{
    int sumOfDigitsX = 0; 
    while (x > 0)
    {
        sumOfDigitsX += x % 10; 
        x = x / 10;             
    }
    return sumOfDigitsX;
}

int main()
{

    int x = 0, y = 0;
    std::cin >> x >> y;

    int sumOfDigitsX = sumOfDigits(x);
    int sumOfDigitsY = sumOfDigits(y);

    std::cout << ((sumOfDigitsX == sumOfDigitsY) ? "equal sum of digits" : "sum of digits are not equal") << std::endl;

    return 0;
}
