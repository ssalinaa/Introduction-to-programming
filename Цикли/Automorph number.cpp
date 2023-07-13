#include <iostream>
#include <cmath>

/*
    ��������, ����� ��������� ���� ���� ����� � ����������.
    ������ ����� � ����������, ��� ��������� �� �������� �� ���� ������.

   ������:
1 � ����������, ������ 1^2 = 1 , ����� �������� �� 1.
2 �� � ���������� - 2^2 = 4 - �� �������� �� 2.
16 �� � ���������� - 16^2 = 256 - �� �������� �� 16.
76 � ���������� - 76^2 = 5776 - �������� �� 76
    
    */
int main()
{

    int n = 0;
    std::cin >> n;

    int countOfDigits = 0;
    int copyOfN = n;
    while (copyOfN > 0)
    {
        countOfDigits++;
        copyOfN /= 10;
    }

    int square = std::pow(n, 2);
    int powOfTen = std::pow(10, countOfDigits);
    int remainder = square % powOfTen;

    if (remainder == n)
        std::cout << "The number is automorphic" << std::endl;
    else
        std::cout << "The number is not automorphic" << std::endl;

    return 0;
}