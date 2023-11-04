#include <iostream>
#include <climits>
#include <cmath>

int main() {

	/*
	
	Задача 01 - Цифра на число
	Напишете програма, която приема 4-цифрено число и цифра, която проверява дали в записа на числото се среща въведената цифра.
	
	*/

	int number;
	std::cin >> number;

	if (number < 1000 || number > 9999) {

		std::cout << "Enter a valid 4-digit number." << std::endl;
		return 1;
	}

	int digit;
	std::cin >> digit;

	if (digit < 0 || digit > 9) {

		std::cout << "Enter a valid digit (from 0 to 9)." << std::endl;
		return 1;
	}

	int temp = number;
	bool found = false;

	while (temp != 0) {

		if (temp % 10 == digit) {

			found = true;
			break;
		}
		temp /= 10;
	}

	if (found) {

		std::cout << "The digit " << digit << " is found in the number " << number << "'s representation." << std::endl;
	}
	else {

		std::cout << "The digit " << digit << " is not found in the number " << number << "'s representation." << std::endl;
	}

	/*
	
	Задача 02 - Магическо число
	Напишете програма, която приема 4-цифрено число, и проверява дали то е "магическо", т.е. дали сумата на първите му 2 цифри е същата като сумата на последните му 2.
	
	*/

	int n;
	std::cin >> n;
	int sum1 = 0;
	int sum2 = 0;
	sum1 = n / 1000 + (n / 100) % 10;
	sum2 = ((n / 10) % 10) + (n % 10);
	if (sum1 == sum2) {

		std::cout << "Yes" << std::endl;
	}
	else {

		std::cout << "No" << std::endl;
	}

	/*
	
	Задача 03 - Вид на знак
	Напишете програма, която приема един знак, и проверява дали той е буква, цифра или специален знак.
	
	Пример:
	Вход	Изход
	a	letter
	9	digit
	[	special character

	*/

	char letter;
	std::cin >> letter;

	if (letter >= '0' && letter <= '9') {

		std::cout << "digit" << std::endl;
	}
	else if (letter >= 'a' && letter <= 'z') {

		std::cout << "letter" << std::endl;
	}
	else {

		std::cout << "special character" << std::endl;
	}

	/*
	
	Задача 04 - Точка в окръжност
	Напишете програма, която приема координатите на точка в пространството, координатите на център на окръжност, както и нейния радиус. Програмата да проверява дали точката е вътре в окръжността, извън окръжността или на самата окръжност.
	
	Пример:
	Вход	    Изход
	1 1 0 0 2	Inside
	1 3 0 2 1	Outside
	1 0 0 0 1	On

	*/

	int x, y, O1, O2, r;
	std::cin >> x >> y >> O1 >> O2 >> r;

	double distance = sqrt(pow(x - O1, 2) + pow(y - O2, 2));
	if (distance == r) {

		std::cout << "On";
	}
	else if (distance > r) {

		std::cout << "Outside";
	}
	else if (distance < r) {

		std::cout << "Inside";
	}

	/*
	
	Задача 05 - Верификация
	Напишете програма, която приема число, представляващо възраст. Ако числото е по-малко от 18, програмата да извежда "You are underaged", а в противен случай - "You are good to go". Да се използва тернарният оператор.
	
	*/
	
	int age;
	std::cin >> age;
	std::string isValid = (age < 18) ? "You are underaged" : "You are good to go";
	std::cout << isValid << std::endl;

	/*
	
	Задача 06 - Наредба
	Напишете програма, която приема 3 числа и ги извежда наредени по големина.
	
	Бонус:
	Използвайте единствено тернарния оператор.

	*/

	int a, b, c;
	std::cin >> a >> b >> c;

	int max = a > b && a > c ? a : b > a && b > c ? b : c;
	int min = a < b && a < c ? a : b < a && b < c ? b : c;
	int mid = (a + b + c) - max - min;

	std::cout << min << " " << mid << " " << max << std::endl;

	/*
	
	Задача 07 - Калкулатор
	Напишете програма, която приема 2 числа и операция - един измежду знаците {+, -, *, /}. Програмата да намира резултата от прилагането на операцията над двете числа.
	
	Пример:
	Вход	Изход
	2 5 +	7
	13 2 /	6.5

	*/

	double m, n;
	std::cin >> m >> n;
	char operation;
	std::cin >> operation;
	switch (operation) {
		 
	case '+': std::cout << m + n << std::endl; break;
	case '-': std::cout << m - n << std::endl; break;
	case '*': std::cout << m * n << std::endl; break;
	case '/': std::cout << m / n << std::endl; break;

	default:
		std::cout << "Invalid operation" << std::endl; break;
	}


	/*
	 
	Задача 08 - Шахматни фигури
	Напишете програма, която приема знак, представляващ шахматна фигура ('r' - топ, 'b' - офицер, 'q' - кралица, 'h' - кон) и 2 двойки координати, представляващи позициите на 2 фигури от подадения вид. Програмата да проверява дали едната фигура може да вземе другата.
	
	Пример:
	Вход	Изход
	r 1 2 1 5	Yes
	b 2 3 1 4	Yes

	*/

	char figure;
	std::cin >> figure;
	int x1, y1, x2, y2;
	std::cin >> x1 >> y1 >> x2 >> y2;

	switch (figure) {

	case 'r':
		std::cout << std::boolalpha << (x1 == x2 || y1 == y2) << std::endl;
		break;
	case 'b':
		std::cout << std::boolalpha << (abs(x1 - x2) == abs(y1 - y2)) << std::endl;
		break;
	case 'q':
		std::cout << std::boolalpha << (x1 == x2 || y1 == y2 || abs(x1 - x2) == abs(y1 - y2)) << std::endl;
		break;
	case 'h':
		std::cout << std::boolalpha << (abs(x1 - x2) == 2 && abs(y1 - y2) == 1 || abs(x1 - x2) == 1 && abs(y1 - y2) == 2) << std::endl;
		break;
	default: 
		std::cout << "Invalid place" << std::endl;
		break;
	}

	return 0;
}