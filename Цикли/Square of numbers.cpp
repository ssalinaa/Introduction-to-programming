#include <iostream>

/*
    ��������, ����� ��� �������� ���������� ����� n
    ������ ������ �� ���������� �� ������ ����� �� 1 �� n (���.)
*/

int main()
{

    int n = 1, sum = 0;
    std::cin >> n;
  
    for (int i = 1; i <= n; i++)
    {
        sum += i * i;
    }

    std::cout << sum << std::endl;

    return 0;
}