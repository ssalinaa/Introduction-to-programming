#include <iostream>

/*
You are given 2 numbers - x and n. Find xn. 
Don't use the function pow from <cmath>.

Example:
Input	Output
 2 8	256
-5 3	-125
*/

int main() {

	int x, n;
	std::cin >> x >> n;
	int power = 1;

	if (n < 0) {

		x = 1 / x;
		n = -n;
	}

	/*
	 while (n > 0)
    {
        if(n % 2 == 1) {
            result *= x;
        }

        x *= x;
        n /= 2;
    }
	*/

	for (size_t i = 0; i < n; i++)
	{
		power *= x;
	}
	std::cout << power << std::endl;

	return 0;
}