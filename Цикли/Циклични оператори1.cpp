#include <iostream>
#include <climits>
#include <cmath>

    /*
    
    1. While �����

    while(<condition>)
    {
        body...
    }

    ������:

    int i = 0;
    while(i < 10)
    {
        i++;
        std::cout << i << ' ';
    }

    2. Do While �����

    do
    {
        body...
    }while(<condition>);

    ������:

    int i = 0;
    do
    {
        i++;
        std::cout << i << ' ';
    }while(i < 10);

    �����: ��� do-while ����������� ������ �� ��������� ����� � ���� ���� ���������.
    
    3. For �����

    for(<initialization>; <condition>; <increment>)
    {
        body...
    }

    ��������� �� for ������:

    ���������������� ����
    ������� ����
    ��������� ����
    ���� �� ������

    ������:

    for(int i = 0; i < 10; i++)
    {
        std::cout << i << ' ';
    }

    4. Foreach ����� - ����������

    for(<initialization> : <container_to_iterate>)
    {
        body...
    }

    �� ���� ��������� �� ������� �� ��������� ����� �� ��������� -> to be continued...
    
    5. Break ��������
    �������� �� �� �������������� �������� �� �����, ����� ��� �� � �������� ������ ���������.
   
   ������:

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

    6. Continue ��������

    �������� ��, ��� ������ �� ��������� ������ ���� �� ���������� �� ������ ��� ������� ����� �� ������ ��.
    
    ������:

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
    
    ������

    ������ 1 �� �� ������ ��������, ����� ������� ���� ����������� ����� n. �� �� ������������ ���������� �� ������ ����������� ���� �����, ��-����� �� n. ����������� 1<= n <= 20.
    
    ����: 5 �����: 0 1 4 9 16

    */

    int n;
    std::cin >> n;

    for (size_t i = 0; i < n; i++)
    {
        std::cout << i * i << " ";
    }

    /*
    
    ������ 2 �� �� ������ ��������, ����� ������� ����� �� ����� � �� ������, ������ �� ������ 0. �� �� �������� ���������.
    
    ����: 1 2 3 4 5 6 7 8 9 0 �����: 45 ����: 5 7 5 0 �����: 17 ����: 3 2 1 0 �����: 6
    
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
     
    ������ 3 �� �� ������ ��������, ����� ������� ���� ����������� ����� n � ��������� n!.
    
    ���� 5 �����: 120

    */

    int num;
    std::cin >> num;

    int fact = 1;
    while (num > 0) {

        fact *= num;
        num--;
    }

    // ������� � for �����
    // for(unsigned int i = 1; i <= n; i++){

    //     fact *= i;

    // }

    std::cout << fact << std::endl;
    
    /*

    ������ 4 �� �� ������ ��������, ����� ������� ���� ����� n � �� ������ �� �������.
    
    ����: 123456 �����: 654321

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

    ������ 5 �� �� ������ ��������, ����� ������� ���� ����� n � ��������� ���� � ������ �� 2.
    
    ����: 1 �����: true ����: 13 �����: false ����: 32 �����: true
    
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
     
    ������ 6 �� �� ������ ��������, ����� ������� ��� ���� ����������� ����� a � b. ���������� �� ��������� �������� �������� �� ����� ����� � ���������� �������� [a, b]. ����������� a<=b.
    
    �� ����� ����� n � ���������:
    
    ��� 0 <= n <= 9, �� �� ���������� ���������� �� n � ����.
    ��� n > 9 � n � �����, �� �� ���������� "�����".
    ��� n > 9 � n � �������, �� �� ���������� "�������".
    ����: 8 11 �����: eight nine even odd
    
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
    
    ������ 7 �� �� ������ ��������, ����� ������� ���� ����� n � ��������� �������� �� ���������.
    
    ����: 5 �����:    *
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