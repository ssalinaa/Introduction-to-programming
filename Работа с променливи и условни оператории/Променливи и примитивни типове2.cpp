#include <iostream>
#include <climits>
#include <cmath>

int main() {

	/*
	Задачи

	Задача 1:
	Въведете в конзолата малка латинска буква, програмата да изведе на екрана нейната съответстваща главна буква.

	*/
	
	char letter;
	std::cin >> letter;
	char upper = letter - ('a' - 'A');
	std::cout << upper << std::endl;

	/*
	 
	Задача 2:
	Въведете в конзолата три цели числа a, b, c. Да се напишат булеви изрази, които имат стойност true,
	ако условията посочени по-долу са изпълнени и стойност false, ако условията не са в сила. 
	Резултатите да се изведат на екрана, всеки на нов ред.
	
	а се дели на 3;
	b принадлежи на интервала [-9, 13];
	c не принадлежи на интервала [0, 8];
	Поне едно от числата a, b или c е отрицателно;
	Числата a, b и c са равни помежду си.

	*/

	int a, b, c;
	std::cin >> a >> b >> c;
	bool isDivisible = (a % 3 == 0); // !(a % 3) е алтернативен вариант
	std::cout << std::boolalpha << isDivisible << std::endl;
	bool isInside = (b >= -9) && (b <= 13);
	std::cout << std::boolalpha << isInside << std::endl;
	bool isNotInside = (c < 0) && (c > 8);
	std::cout << std::boolalpha << isNotInside << std::endl;
	bool isNegative = (a < 0) || (b < 0) || (c < 0);
	std::cout << std::boolalpha << isNegative << std::endl;
	bool areEqual = (a == b && b == c);
	std::cout << std::boolalpha << areEqual << std::endl;

	/*
	
	Задача 3:
	Въведете в конзолата произволно трицифрено цяло число. Да се изведе на екрана дали всички цифри на това число са нечетни - съответно да се изведе true или false.
	
	*/

	int num;
	std::cin >> num;
	int firstDigit = num / 100,
		secondDigit = (num / 10) % 10,
		thirdDigit = num % 10;

	std::cout << std::boolalpha << (firstDigit % 2 && secondDigit % 2 && thirdDigit % 2) << std::endl;

	/*
	
	Задача 4:
	Намерете лицата на съответните фигури:
	
	Триъгълник със страни a, b и c.
	
	Окръжност с радиус r. Дефинирайте ваша собствена константа PI по подходящия начин. За стойност може да използвате 3.14159.
	
	*/
	
	double A, B, C, r;
	std::cin >> A >> B >> C, r;

	double p = (A + B + C) / 2;
	double triangleArea = sqrt(p * (p - A) * (p - B) * (p - C));
	std::cout << "Triangle area: " << triangleArea << std::endl;

	double PI = 3.14159;
	double circleArea = PI * r * r;
	std::cout << "Circle area: " << circleArea << std::endl;

	/*
	
	Задача 5:
	Намерете обемите на съответните фигури:
	
	Обем на сфера с радиус r.
	
	Обем на конус с радиус r и височина h.

	*/

	double R, h;
	std::cin >> R >> h;

	double sphereVolume = (4 / 3) * PI * (R * R * R);
	std::cout << "Sphere volume: " << sphereVolume << std::endl;

	double coneVolume = (1 / 3) * PI * (R * R) * h;
	std::cout << "Cone volume: " << coneVolume << std::endl;

	/*
	
	Задача 6:
	Да се напише програма, която прочита три двойки числа. Първата са цели числа, втората са от тип double и третата са от тип float. 
	Помислете кои от операциите събиране, изваждане, умножение, целочислено деление и деление с остатък могат да се приложат към съответните двойки
	и изведете резултатите на екрана. Вижте какво ще се получи, когато се опитате да приложите операциите към различни типове
	(например float и double, int и double, float и int).
	
	*/
	int int1, int2;
	double double1, double2;
	float float1, float2;

	std::cout << "Enter two integers: ";
	std::cin >> int1 >> int2;
	std::cout << "Enter two double numbers: ";
	std::cin >> double1 >> double2;
	std::cout << "Enter two float numbers: ";
	std::cin >> float1 >> float2;

	std::cout << "\n-------Operations between integers-------" << std::endl;
	std::cout << int1 << " + " << int2 << " = " << int1 + int2 << std::endl;
	std::cout << int1 << " - " << int2 << " = " << int1 - int2 << std::endl;
	std::cout << int1 << " * " << int2 << " = " << int1 * int2 << std::endl;
	std::cout << int1 << " % " << int2 << " = " << int1 % int2 << std::endl;
	std::cout << int1 << " / " << int2 << " = " << int1 / int2 << std::endl;

	std::cout << "\n-------Operations between doubles-------" << std::endl;
	std::cout << double1 << " + " << double2 << " = " << double1 + double2 << std::endl;
	std::cout << double1 << " - " << double2 << " = " << double1 - double2 << std::endl;
	std::cout << double1 << " * " << double2 << " = " << double1 * double2 << std::endl;
	// std::cout << double1 << " % " << double2 << " = " << double1 % double2 << std::endl; // --> error
	std::cout << double1 << " / " << double2 << " = " << double1 / double2 << std::endl;

	std::cout << "\n-------Operations between floats-------" << std::endl;
	std::cout << float1 << " + " << float2 << " = " << float1 + float2 << std::endl;
	std::cout << float1 << " - " << float2 << " = " << float1 - float2 << std::endl;
	std::cout << float1 << " * " << float2 << " = " << float1 * float2 << std::endl;
	// std::cout << float1 << " % " << float2 << " = " << float1 % float2 << std::endl; // --> error
	std::cout << float1 << " / " << float2 << " = " << float1 / float2 << std::endl;

	std::cout << "\n-----------Mixed operations------------" << std::endl;
	std::cout << int1 << " + " << double1 << " = " << int1 + double1 << std::endl;
	std::cout << int1 << " + " << float1 << " = " << int1 + float1 << std::endl;
	std::cout << double1 << " + " << float1 << " = " << double1 + float1 << std::endl;

	std::cout << int1 << " - " << double1 << " = " << int1 - double1 << std::endl;
	std::cout << int1 << " - " << float1 << " = " << int1 - float1 << std::endl;
	std::cout << double1 << " - " << float1 << " = " << double1 - float1 << std::endl;

	std::cout << int1 << " * " << double1 << " = " << int1 * double1 << std::endl;
	std::cout << int1 << " * " << float1 << " = " << int1 * float1 << std::endl;
	std::cout << double1 << " * " << float1 << " = " << double1 * float1 << std::endl;

	std::cout << int1 << " / " << double1 << " = " << int1 / double1 << std::endl;
	std::cout << double1 << " / " << int1 << " = " << double1 / int1 << std::endl;
	std::cout << int1 << " / " << float1 << " = " << int1 / float1 << std::endl;
	std::cout << float1 << " / " << int1 << " = " << float1 / int1 << std::endl;
	std::cout << double1 << " / " << float1 << " = " << double1 / float1 << std::endl;

	// std::cout << int1 << " % " << float1 << " = " << int1 % float1 << std::endl; // --> error
	// std::cout << float1 << " % " << int1 << " = " << float1 % int1 << std::endl; // --> error

	/*
	
	Задача 7:
	Въведете в конзолата три различни цели числа a, b, c:
	
	Отпечатайте на екрана (с true или false) дали числата отговарят на следното условие: min(a,c) < b < max(a,c).
	Бонус:
	Отпечатайте на екрана (с true или false) дали числата отговарят на следното условие: min(a,c) < b < max(a,c) , изполвайки точно 1 сравнение.
	*/

	int a, b, c;
	std::cin >> a >> b >> c;

	std::cout << std::boolalpha << (std::min(a, c) < b && b < std::max(a, c)) << std::endl;

	std::cout << std::boolalpha << ((a - c < 0 && a < b && b < c) || (a - c > 0 && c < b&& b < a)) << std::endl;

	// Bonus task 
	std::cout << std::boolalpha << ((a - b) * (c - b) < 0) << std::endl;
}
