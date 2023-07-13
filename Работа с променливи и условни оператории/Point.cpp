#include <iostream>

/* 
Програма, която въвежда координатите на точка от равнината
и извежда на кой квадрант принадлежи тя.
Да се разгледа и случая, в който точката съвпада с началото на координатната система 
(т.е. да извежда: „Точката е (0, 0)"). */

int main()
{

    double x, y;
    std::cout << "Please input x: ";
    std::cin >> x;

    std::cout << "Please input y: ";
    std::cin >> y;

    if (x > 0 && y > 0) {
        std::cout << "The point is in the I quadrant" << std::endl;
    }
    if (x < 0 && y > 0) {
        std::cout << "The point is in the II quadrant" << std::endl;
    }
    if (x < 0 && y < 0) {
        std::cout << "The point is in the III quadrant" << std::endl;
    }
    if (x > 0 && y < 0) {
        std::cout << "The point is in the IV quadrant" << std::endl;
    }
    if (x == 0 && y == 0) {
        std::cout << "The point is (0, 0)" << std::endl;
    }
    if (x == 0 && y != 0) {
        std::cout << "The point is on the x-axis" << std::endl;
    }
    if (x != 0 && y == 0) {
        std::cout << "The point is on the y-axis" << std::endl;
    }
    
    return 0;
}
