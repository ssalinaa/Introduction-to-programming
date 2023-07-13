#include <iostream>

/*
Да се напише програма, която по въвдено естествено число n отпечатва числата от 1 до n, които се делят на 3.
*/

int main()
{

    int n = 1;
    std::cin >> n;

    for (int i = 1; i <= n; i++)
    {
       
        if (i % 3 == 0)
            std::cout << i << std::endl;
    }

    return 0;
}
