#include <iostream>
#include <cmath>

/*
Програма, която въвежда от клавиатурата координатите 
на върховете на триъгълник и намира дължината на височината 
към най-голямата страна.
*/

int main()
{
    double x1, y1, x2, y2, x3, y3;
    std::cout << "Please input x1: ";
    std::cin >> x1;

    std::cout << "Please input y1: ";
    std::cin >> y1;

    std::cout << "Please input x2: ";
    std::cin >> x2;

    std::cout << "Please input y2: ";
    std::cin >> y2;

    std::cout << "Please input x3: ";
    std::cin >> x3;

    std::cout << "Please input y3: ";
    std::cin >> y3;

    double a = std::sqrt(std::pow((x2 - x1), 2) + std::pow((y2 - y1), 2));
    double b = std::sqrt(std::pow((x3 - x1), 2) + std::pow((y3 - y1), 2));
    double c = std::sqrt(std::pow((x2 - x3), 2) + std::pow((y2 - y3), 2));

    double p = (a + b + c) / 2;
    double area = std::sqrt(p * (p - a) * (p - b) * (p - c));
    double height;

    if (a >= b && a >= c)
    {
        height = 2 * area / a;
    }
    else if (b >= a && b >= c)
    {
        height = 2 * area / b;
    }
    else if (c >= a && c >= b)
    {
        height = 2 * area / c;
    }

    std::cout << "The height is: " << height << std::endl;

	return 0;
}
