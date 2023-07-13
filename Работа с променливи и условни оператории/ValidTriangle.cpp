﻿#include <iostream>

/*
Програма, която по въведени три числа проверя 
дали може да бъде образвуан триъгълник с дължини на страните 
тези три числа.
*/

int main()
{

	int a, b, c;

	std::cin >> a >> b >> c;

	bool inequalityA = b + c > a; 
	bool inequalityB = a + c > b;
	bool inequalityC = a + b > c;

	if (a < 0 || b < 0 || c < 0) 
	{
		std::cout << "Invalid input" << std::endl;
	}
	else
	{
		if (inequalityA && inequalityB && inequalityC)
		{
			std::cout << a << ", " << b << " and " << c << " can form a triangle" << std::endl;
		}
		else
		{
			std::cout << a << ", " << b << " and " << c << " can't form a triangle" << std::endl;
		}
	}

	return 0;
}
