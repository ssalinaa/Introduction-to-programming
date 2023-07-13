#include <iostream>

/*
Програма, която разменя и извежда стойностите на две цели числа 
без да използва помощна променлива.
*/

int main()
{
	int firstNumber, secondNumber;

	std::cout << "Enter first number: ";
	std::cin >> firstNumber;

	std::cout << "Enter second number: ";
	std::cin >> secondNumber;

	firstNumber = firstNumber + secondNumber;
	secondNumber = firstNumber - secondNumber;
	firstNumber = firstNumber - secondNumber;

	// int temp = firstNumber;
	// firstNumber = secondNumber;
	// secondNumber = temp;

	std::cout << "First number is now: " << firstNumber << ", and second number is: " << secondNumber << std::endl;
	
	return 0;
}
