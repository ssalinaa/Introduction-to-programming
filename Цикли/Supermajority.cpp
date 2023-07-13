#include <iostream>

/*
You are given a positive number n and n consecutive integers, 
one of which appears more than the rest of the numbers combined. 
Find that number (You aren't allowed to use arrays).

Example:
Input	Output
5
1 2 1 3 1	1
4
1 2 1 3	???
Explanation:
In the first example there are three 1s which is more than half of the
numbers - 1 is supermajority.

In the second example there are two 1s which is exactly half of the
numbers - 1 is NOT supermajority. However, in the requirements it is 
stated that there will always be a number that is supermajority. 
Therefor this input is illegal. 
Assume that there won't be such an input.
*/


int main()
{
    unsigned n;
    std::cin >> n;
    int counter = 0;
    int current = 0;

    for (int i = 0; i < n; i++)
    {
        int number;
        std::cin >> number;
        if (counter != 0)
        {
            if (current == number)
            {
                counter++;
            }
            else
            {
                counter--;
            }
        }
        else
        {
            current = number;
            counter = 1;
        }
    }

    std::cout << current << '\n';

    return 0;
}