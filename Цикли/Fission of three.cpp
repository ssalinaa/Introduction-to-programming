#include <iostream>

/*
��������, ����� �� ������� ���������� ����� n 
��������� ������� �� 1 �� n, ����� �� ����� �� 3.
*/

int main()
{

    int n = 1;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
       
        if (i % 3 == 0)
            std::cout << i << std::endl;
    }

    return 0;
}