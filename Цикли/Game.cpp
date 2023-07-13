#include <iostream>
#include <cstdlib>
#include <ctime>

/*
    ��������, ����� �������� ���������� ����� �� 1 �� n (n �� ������� �� �����������) � ������� �� ���� ����������� �� ������ �������.
    ��� ������� �� � ������ �����, ���������� �� ����� � �� ���� ������, ��� � ������ ������ ��� ������� ��������� ��������� � ������� ����������.
    ������ ������������ ���-������ ������ �������, ���������� ������� ����� ����� �� ���� �����, �� �� ������, � ���������.
*/
int main()
{
    // ���������� ����������, �� �� �� �� ���� ���� � ���� ����� ��� ����� ���������� �� ����������.
    // ������������ - https://en.cppreference.com/w/cpp/numeric/random/rand
    std::srand(std::time(nullptr));

    int n;
    std::cin >> n;

    int attempts = 0;
    int randomNumber = std::rand() % n; 
    int guess;

    do {

        std::cin >> guess;

        if (guess < randomNumber)
        {
            std::cout << "Your guess is less than the acutal nubmer" << std::endl;
        }

        if (guess > randomNumber)
        {
            std::cout << "Your guess is more than the acutal nubmer" << std::endl;
        }

        attempts++;
    } while (guess != randomNumber);

    std::cout << "It took you " << attempts << " attempts to guess the number" << std::endl;

    return 0;
}