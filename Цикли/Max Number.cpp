#include <iostream>
#include <limits>

/*

You are given a positive number n and n consecutive numbers. Find the max number among them.

Example:
Input	Output
5
4 2 8 3 6	8
7
14 5 63 75 59 0 46	75

*/

int main() {

    unsigned n;
    std::cin >> n;
    int max = std::numeric_limits<int>::min(); 

    for (size_t i = 0; i < n; i++)
    {
        int a;
        std::cin >> a;
        if (a > max) {
            max = a;
        }
    }

    std::cout << max;
   
    return 0;
}