#include <iostream>
#include <cstdlib>
#include <ctime>

/*
    Програма, която генерира произволно число от 1 до n (n се въвежда от потребителя) и започва да пита потребителя да познае числото.
    Ако числото му е твърде малко, програмата му казва и го пита отново, ако е твърде голямо пак изписва подходящо съобщение и цикълът продължава.
    Когато потребителят най-накрая познае числото, програмата извежда колко опита са били нужни, за да познае, и приключва.
*/
int main()
{
    // Захранваме генератора, за да не ни дава едно и също число при всяко изпълнение на програмата.
    // Документация - https://en.cppreference.com/w/cpp/numeric/random/rand
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