#include <iostream>

/*
Програма, която преобразува температурата.
*/

int main()
{
	double C;
	double F;
	double temperature;
	char inputTempType;

	std::cout << "Temperature type:";
	std::cin >> inputTempType;

	std::cout << "Temperature: ";
	std::cin >> temperature;

	if (inputTempType == 'C')
	{
		F = ((temperature - 32) * 5) / 9;
		std::cout << F;
	}
	else if (inputTempType == 'F')
	{
		C = (((temperature * 9) / 5) + 32);
		std::cout << C;
	}
	else
	{
		std::cout << "Error.";
		return 0;
	}

	return 0;
}