#include <iostream>
#include <bitset>

/*
1.1. Превърнете рожденната си дата шестнадесетична, в осмична и в двоична бройни системи.
*/

int main()
{
	int day;
	std::cin >> day;
	int month;
	std::cin >> month;
	int year;
	std::cin >> year;

	// Hexadecimal representation
	std::cout << "Hexadecimal: " << std::hex << day << "." << std::hex << month << "." << std::hex << year << std::endl;

	// Octal representation
	std::cout << "Octal: " << std::oct << day << "." << std::oct << month << "." << std::oct << year << std::endl;

	// Binary representation
	std::cout << "Binary: " << std::bitset<5>(day) << "." << std::bitset<4>(month) << "." << std::bitset<11>(year) << std::endl;

	return 0;
}
