#include <iostream>

/*
You are given 3 positive numbers a, b and c. 
Find the last combination of 2 numbers in the interval [a, b] 
in which the sum of the two numbers is equal to c. 
If there is not a combination with that sum print
"Such combination doesn't exist".

Example:
Input	Output
1
10
5	4 + 1 = 5
23
24
100	Such combination
doesn't exist

Explanation:
First example: All combinations between 1 and 10 are: 1 1, 1 2, 1 3, ... , 3 10, 4 1, 4 2, ... ,10 9, 10 10. 
The combination 4 1 is the last in which the sum is 5.

Second example: All combinations between 23 and 24 are: 23 23, 23 24, 24 23, 24 24. 
Neither of them has sum 100.
*/

int main() {
    unsigned a, b, c;
    std::cin >> a >> b >> c;
    unsigned lastFirst = a;
    unsigned lastSecond = a;

    for (size_t i = a; i <= b; i++)
    {
        for (size_t j = a; j <= b; j++)
        {
            if (i + j == c) {
                lastFirst = i;
                lastSecond = j;
            }
        }
    }

    if (lastFirst + lastSecond == c) {
        std::cout << lastFirst << " + " << lastSecond << " = " << c;
    }
    else {
        std::cout << "Such combination doesn't exist";
    }

    return 0;
}