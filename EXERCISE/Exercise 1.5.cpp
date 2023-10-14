#include <iostream>

/*
1.5. Problem 2.7.[1] Write a program that inputs the coordinates of a point in the plane and outputs the quadrant to which it belongs.
Consider cases when the point belongs to one of the coordinate axes or coincides with the origin of the coordinate system.
*/

int main() {

    double x, y;

    // Input the coordinates of the point
    std::cout << "Enter the x-coordinate: ";
    std::cin >> x;
    std::cout << "Enter the y-coordinate: ";
    std::cin >> y;

    // Check the coordinates and determine the quadrant
    if (x == 0 && y == 0) {
        std::cout << "The point lies at the origin of the coordinate system." << std::endl;
    }
    else if (x == 0) {
        std::cout << "The point lies on the Y-axis." << std::endl;
    }
    else if (y == 0) {
        std::cout << "The point lies on the X-axis." << std::endl;
    }
    else if (x > 0 && y > 0) {
        std::cout << "The point belongs to the first quadrant." << std::endl;
    }
    else if (x < 0 && y > 0) {
        std::cout << "The point belongs to the second quadrant." << std::endl;
    }
    else if (x < 0 && y < 0) {
        std::cout << "The point belongs to the third quadrant." << std::endl;
    }
    else {
        std::cout << "The point belongs to the fourth quadrant." << std::endl;
    }

    return 0;
}
