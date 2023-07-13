#include <iostream>

/*
Програма, която по въведенa буква, 
отпечатва на екрана дали буквата е главна или малка.
*/

int main()
{
    char letter;

    std::cin >> letter;

    if (letter >= 65 && letter <= 90)
    {
        std::cout << "The input symbol is an upper letter" << std::endl;
    }
    else if (letter >= 97 && letter <= 122)
    {
        std::cout << "The input symbol is a lower letter" << std::endl;
    }
    else
    {
        std::cout << "The input symbol is not a letter" << std::endl;
    }


    return 0;
}
