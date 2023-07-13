#include <iostream>
#include <windows.h>

/*


M���, ����� ������ �� ������� �����:
���� ����������� �� ����. ��� ������� �����

��� ������� � 0: ���������� ���������
��� ������� � 1: ���������� �������� C (��)
��� ������� � 2: ���������� �������� D (��)
��� ������� � 3: ���������� �������� E (��)
...
��� ������� � 7: ���������� �������� B (��)
���� �����, ��� ������� �� � ���� 0, ������� �� �������.

� �������� ��� ��������� �� ��������, �� ���� �� 7�� ���������� C(��): 130.81, D(��): 146.83, E(��): 164.81, F(��): 174.61, G(���): 196.00, A(��): 220.00, B(��): 246.94
*/

int main()
{
   
    const double C = 130.81; // ��
    const double D = 146.83; // ��
    const double E = 164.81; // ��
    const double F = 174.61; // ��
    const double G = 196.00; // ���
    const double A = 220.00; // ��
    const double B = 246.94; // ��

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