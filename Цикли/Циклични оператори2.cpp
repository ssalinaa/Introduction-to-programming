#include <iostream>
#include <climits>
#include <cmath>

int main() {

    /*
     
    ������

    ������ 1:
    �� �� ������� �� ��������� ���� ����� � �� �� ��������� ������� �� � ������� ���.

    ������ :

    ���� : 12345
    ����� : 54321

    */

    int number;
    std::cin >> number;
    int result = 0;
    while (number != 0) {

        result *= 10;
        result += number % 10;
        number /= 10;
    }

    std::cout << result << std::endl;

    /*
     
    ������ 2 :
    �� �� ������� �� ��������� ���� ����� n � �� �� ������ ���������� �� n!.

    ������ :

    ���� : 5
    ����� : 120

     */

    int n;
    std::cin >> n;
    int fact = 1;
    while (n != 0) {

        fact *= n;
        n--;
    }

    std::cout << fact << std::endl;

     /*
         
     ������ 3 :
     �� �� �������� �� ��������� ���� ����� x � ����� n � �� �� ������ ����� ���� ������� n �� ����� � ������� x.

     ������ :

     ���� : 32345 3
     ����� : 2

     */

    int x, digit;
    std::cin >> x >> digit;
    int count = 0;
    while (x != 0) {

        if (digit == x % 10) {

            count++;
        }
        x /= 10;
    }

    std::cout << count << std::endl;

    /*
     
    ������ 4 :
    �� �� ������� ���� ����� �� ��������� � �� �� ������� ���� �� � ���������.

    ������ :

    ���� : 12321
    ����� : true

    ���� : 12345
    ����� : false

    */

    int num;
    std::cin >> num;
    int reversed = 0;
    int copy = num;
    while(num != 0) {

        reversed *= 10;
        reversed += num % 10;
        num /= 10;
    }

    std::cout << std::boolalpha << (copy == reversed) << std::endl;

    /*
    
    ������ 5 :
    �� �� ������� �� ��������� ���� ����� � �� �� ������� �� ������ ������ ������ ��������.

    ������ :

    ���� : 10
    ����� : 1 2 5 10

    */

    int numm;
    std::cin >> numm;
    for (size_t i = 1; i <= numm; i++)
    {
        if (numm % i == 0) {

            std::cout << i << " ";
        }
    }

    /*
       
    ������ 6 :
    �� �� ������� �� ��������� ���� ����� n � ���� ���� n �� ���� ���� �����.
    �� �� ������� �������, �������� � ������ ����������� �� ����
    �����(�� ����� �� � ���������� �� �� �������� �����).

    ������ :

    ���� : 5 1 2 3 4 5
    ����� : min = 1, max = 5, avg = 3

    */

    int n;
    std::cin >> n;
    int min = std::numeric_limits<int>::max();
    int max = 0;
    int average = 0;
    for (size_t i = 0; i < n; i++)
    {
        int m;
        std::cin >> m;
        average += m;

        if (m > max) {

            max = m;
        }

        if (m < min) {

            min = m;
        }

    }
    std::cout << "Min = " << min << ", max = " << max << ", average = " << average / n << std::endl;

    /*
     
    ������ 7 :
    �� �� ������� �� ��������� ���� ����� n � �� �� ��������� �� ������ ������� n ����� �� ��������.

    ������ :

    ���� : 5
    ����� : 1 1 2 3 5

    */

    int n;
    std::cin >> n;
    int first = 1;
    int second = 1;
    for (size_t i = 0; i < n; i++)
    {
        std::cout << first << " ";
        int next = first + second;
        first = second;
        second = next;
    }

    /*
     
    ������ 8 (�� �������) :
    �� �� ������ ��������, ����� ��������� ���� ������ ����� � "�����������".���� ����� �� ������ "�����������", ��� ������ �� ������� ��, ���������� �� ������ ���� �� ������� ��, � ����� �� ������ �����.

    ������ :

    ���� : 153
    ����� : true
    ��������� : 153 = 1 ^ 3 + 5 ^ 3 + 3 ^ 3

    ���� : 123
    ����� : false
    ��������� : 123 != 1 ^ 3 + 2 ^ 3 + 3 ^ 3

    ���� : 370
    ����� : true
    ��������� : 370 = 3 ^ 3 + 7 ^ 3 + 0 ^ 3

    */

    int number;
    std::cin >> number;
    int sum = 0;
    int count = 0;
    int copy = number;
    while (copy != 0) {

        copy /= 10;
        count++;
    }

    copy = number;
    while (copy != 0) {

        sum += std::pow(copy % 10, count);
        copy /= 10;
    }

    std::cout << std::boolalpha << (sum == number) << std::endl;
}