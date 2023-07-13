#include <iostream>

/*

You are given 2 numbers and an operation (+, -, *, /). Find the number that is the result of using that operation on those 2 numbers.

Example:
Input	Output
2 5 +	7
13 2 /	6.5

*/

int main()
{
    double number1, number2;
    char operation;
    std::cin >> number1 >> number2 >> operation;

    switch (operation)
    {
    case '+':
        std::cout << number1 + number2;
        break;
    case '-':
        std::cout << number1 - number2;
        break;
    case '*':
        std::cout << number1 * number2;
        break;
    case '/':
        std::cout << number1 / number2;
        break;
    default:
        std::cout << "unknown operator\n";
        break;
    }

    return 0;
}