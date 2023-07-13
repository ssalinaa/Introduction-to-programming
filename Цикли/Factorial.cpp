#include <iostream>

/*
You are given a positive number n. Find n!.

Example:
Input	Output
5	120
10	3628800
*/

int main() {

	int n;
	std::cin >> n;

	int factorial = 1;

	for (size_t i = 1; i <= n; i++)
	{
		factorial *= i;
	}

	std::cout << factorial << std::endl;

	return 0;
}