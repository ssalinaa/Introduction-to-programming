#include <iostream>
#include <string>
#include <sstream>

/*
2.3. Task 2.57.[1] Write a Boolean function that checks whether the sum of the digits of a parameter is a positive integer
multiple of 3.
*/

bool isMultipleOf3(int number) {

	int sum = 0;
	while (number > 0) {

		sum += number % 10;
		number /= 10;
	}
	return sum % 3 == 0;
}

int main() {

	int number;
	std::cin >> number;

	std::cout << std::boolalpha << isMultipleOf3(number) << std::endl;

	return 0;
}