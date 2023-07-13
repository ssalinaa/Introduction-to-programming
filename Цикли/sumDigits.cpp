#include <iostream>

/*
You are given a number. Find the sum of its digits.

Example:
Input	Output
257	14
58126	22
*/

int main()
{
	int number;
	std::cin >> number;

	int sum = 0;

	while (number != 0) {

		int digit = number % 10;
		sum += digit;
		number /= 10;
	}
	std::cout << sum << std::endl;

	return 0;
}
