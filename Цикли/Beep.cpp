#include <iostream>
#include <windows.h>

/*


Mеню, което работи по следния начин:
пита потребителя за вход. Той въвежда число

ако числото е 0: програмата приключва
ако числото е 1: програмата изсвирва C (до)
ако числото е 2: програмата изсвирва D (ре)
ако числото е 3: програмата изсвирва E (ми)
...
ако числото е 7: програмата изсвирва B (си)
След което, ако числото не е било 0, цикълът се повтаря.

В интернет има честотите на тоновете, но тези са 7те стандартни C(до): 130.81, D(ре): 146.83, E(ми): 164.81, F(фа): 174.61, G(сол): 196.00, A(ла): 220.00, B(си): 246.94
*/

int main()
{
   
    const double C = 130.81; // до
    const double D = 146.83; // ре
    const double E = 164.81; // ми
    const double F = 174.61; // фа
    const double G = 196.00; // сол
    const double A = 220.00; // ла
    const double B = 246.94; // си

    int input = -1;
    while (input != 0)
    {

        std::cout << ">>: ";
        std::cin >> input;
        switch (input)
        {
        case 1:
            Beep(C, 500);
            break;
        case 2:
            Beep(D, 500);
            break;
        case 3:
            Beep(E, 500);
            break;
        case 4:
            Beep(F, 500);
            break;
        case 5:
            Beep(G, 500);
            break;
        case 6:
            Beep(A, 500);
            break;
        case 7:
            Beep(B, 500);
            break;
        }
    }

    return 0;
}