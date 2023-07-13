#include <iostream>


/*
Да се напише програма, която въвежда три реални числа и 
ги извежда на екрана сортирани във възходящ ред.
*/
int main()
{
    int firstNumber, secondNumber, thirdNumber;
	std::cout << "Enter first number: ";
	std::cin >> firstNumber;

	std::cout << "Enter second number: ";
	std::cin >> secondNumber;

	std::cout << "Enter third number: ";
	std::cin >> thirdNumber;

	if (firstNumber <= secondNumber && secondNumber <= thirdNumber) {
		std::cout << firstNumber << std::endl;
		std::cout << secondNumber << std::endl;
		std::cout << thirdNumber << std::endl;
	}
	else if (firstNumber <= thirdNumber && thirdNumber <= secondNumber) {
		std::cout << firstNumber << std::endl;
		std::cout << thirdNumber << std::endl;
		std::cout << secondNumber << std::endl;
	}
	else if (secondNumber <= firstNumber && firstNumber <= thirdNumber) {
		std::cout << secondNumber << std::endl;
		std::cout << firstNumber << std::endl;
		std::cout << thirdNumber << std::endl;
	}
	else if (secondNumber <= thirdNumber && thirdNumber <= firstNumber) {
	    std::cout << secondNumber << std::endl;
		std::cout << thirdNumber << std::endl;
		std::cout << firstNumber << std::endl;
	}
	else if (thirdNumber <= secondNumber && secondNumber <= firstNumber) {
		std::cout << thirdNumber << std::endl;
		std::cout << secondNumber << std::endl;
		std::cout << firstNumber << std::endl;
	}
	else if (thirdNumber <= firstNumber && firstNumber <= secondNumber) {
		std::cout << thirdNumber << std::endl;
		std::cout << firstNumber << std::endl;
		std::cout << secondNumber << std::endl;
	}

	return 0;
}
