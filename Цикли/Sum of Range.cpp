#include <iostream>

/*
You are given 2 numbers a and b. Find the sum of all numbers in the interval [a, b].

Example:
Input	Output
1
100	5050
-7
26	323
*/

int main() {

	int a, b;
	std::cin >> a >> b;
	int sum = 0;

	for (int i = a; i <= b; i++) {

		sum += i;
	}

	std::cout << sum << std::endl;

	return 0;
}