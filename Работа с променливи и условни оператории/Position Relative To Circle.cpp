#include <iostream>
#include <cmath>

/*

You are given the coordinates of a 2D point, 
the coordinates of the center of a circle as well as its radius.
Check if the point is inside, outside or on the circle.

*/

int main()
{
    double x1, y1, x2, y2, r;
    std::cin >> x1 >> y1 >> x2 >> y2 >> r;
    double dist = sqrt(pow(abs(x2 - x1), 2) + pow(abs(y2 - y1), 2));
    
    if (dist < r)
    {
        std::cout << "Inside\n";
    }
    else if (dist > r)
    {
        std::cout << "Outside\n";
    }
    else
    {
        std::cout << "On\n";
    }
   
    return 0;
}