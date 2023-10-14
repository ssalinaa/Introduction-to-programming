#include <iostream>

/*
1.4. Problem 1.7.[1] Write a program that calculates the area of a triangle given:
a) the length of a side and the height to it;
b) three sides.
*/

int main() {

    // a)
    // Enter the length of the side and its height
    double side, height;
    std::cout << "Enter the length of the side: ";
    std::cin >> side;
    std::cout << "Enter the height to it: ";
    std::cin >> height;

    // Calculate the area of the triangle
    double area = 0.5 * side * height;

    // Display the result
    std::cout << "The area of the triangle is: " << area << std::endl;
    

    // b)

    // Enter the lengths of the three sides
    double a, b, c;
    std::cout << "Enter the length of side a: ";
    std::cin >> a;
    std::cout << "Enter the length of side b: ";
    std::cin >> b;
    std::cout << "Enter the length of side c: ";
    std::cin >> c;

    // Calculate the semiperimeter
    double s = (a + b + c) / 2;

    // Calculate the area of the triangle using Heron's formula
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    // Display the result
    std::cout << "The area of the triangle is: " << area << std::endl;

    return 0;
}
