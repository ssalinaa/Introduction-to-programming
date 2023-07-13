#include <iostream>

/* 
Програма, която приема символ от потребителя и го преобразува
в главна буква (ако въведената буква е малка).
*/

int main()
{
    char c;
    std::cin >> c;

    char capital = c - ('a' - 'A');

    std::cout << capital << std::endl;

    return 0;
}