#include <iostream>
#include <cmath>

/*
You are given a number. Check if it is prime.

Example:
Input	Output
7	Prime
63	Composite
1	Neither prime nor composite
*/

int main() {

	int n;
	std::cin >> n;
	bool isPrime = true;

	unsigned i = 2;
	while (i < sqrt(n) && isPrime) {

		if (n % i == 0) {

			isPrime = false;
		}
		i++;
	}

	std::cout << (n == 1 ? "Neither prime nor coposite" : isPrime ? "Prime" : "Composite");

	return 0;
}