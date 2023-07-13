#include <iostream>
#include <cmath>

/*

You are given a single character representing a chess piece ('r' - rook, 'b' - bishop, 'q' - queen, 'h' - horse) and two pairs of coordinates representing the positions of two of those pieces. Check if they can take each other.

Example:
Input	Output
r 1 2 1 5	Yes
b 2 3 1 4	Yes

*/

int main() {

    char piece;
    int x1, y1, x2, y2;
    std::cin >> piece >> x1 >> y1 >> x2 >> y2;

    switch (piece)
    {
    case 'r':
        std::cout << std::boolalpha << (x1 == x2 || y1 == y2) << '\n';
        break;
    case 'b':
        std::cout << std::boolalpha << (abs(x1 - x2) == abs(y1 - y2)) << '\n';
        break;
    case 'q':
        std::cout << std::boolalpha << (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2)) << '\n';
        break;
    case 'h':
        std::cout << std::boolalpha << ((abs(x1 - x2) == 2 && abs(y1 - y2) == 1) || (abs(x1 - x2) == 1 && abs(y1 - y2) == 2)) << '\n';
        break;
    default:
        std::cout << "Unrecognized piece\n";
        break;
    }

    return 0;
}